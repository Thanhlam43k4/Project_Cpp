//Some function use in main.cpp

#include<ctime>
#include<fstream>
#include<iostream>
#include<cstring>
#include<sstream>
#include<string>

using namespace std;


void print_time(){ //Fucntion to print local time.
    time_t t ;
    struct tm *tt;
    time(&t);
    tt = localtime(&t);
    cout <<asctime(tt);
}
bool checkLogin(string usr_name,string usr_pass){           //Function to check login is accepted.
    string res;
    res = usr_name + '-' + usr_pass;
    fstream file;
    file.open("data",ios::in | ios::app);
    string sence;
    while(getline(file,sence)){
        if(sence == res){
            return true;
        }
    }
    return false;
}
string getUserName(string senc){        //Function to get user_name.
    string res;
    string res1;
    stringstream se(senc);
    while(getline(se,res,'-')){
        res1 = res;
        break;
    }
    return res1;
} 
bool check_user_exit(string name){    //Function to check user_name is existed.
    fstream my_file;
    my_file.open("data",ios::in | ios::app);
    string sence;
    while(getline(my_file,sence)){
         string  username;
            username = getUserName(sence);
           if(username == name){
              return true;
          }  
        }
        my_file.close();
    return false;
}
string getPass(string senc){ //Function get password of User_name.
    string res;
    stringstream se(senc);
    int cnt = 0;
    while(getline(se,res,'-')){
        cnt++;
        if(cnt == 1){
            return res;
            break;
        }
    }
    return "Not found Password";

}
bool check_Pass(string prev,string curr){ //Funtion to check password correct when register.
 if(prev == curr){
    return true;
 } 
 return false; 
}
