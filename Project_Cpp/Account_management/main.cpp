//Program to management login register of accounts 

#include "main.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        cout <<"--------Login menu--------\n";
        cout <<"|1.Login   |\n";
        cout <<"|2.Register|\n";
        cout <<"|3.Exit    |\n";
        cout <<" ----------\n";
        int lc;cout <<"Input Your Option:";cin >>lc;
        if(lc == 3){
            break;
        }else if(lc == 2){
                    cout <<"--------Register menu--------\n";
                    cout <<"Your username: ";
                    string usr_name;
                    cin >> usr_name;
                    if(check_user_exit(usr_name)){
                        cout <<"This username is existed!,Please use a another username\n";
                        break;
                    }else{
                        cout <<"Username is valid\n";
                    }
                    cout <<"Your password: ";
                    string usr_pass;cin >> usr_pass;
                    cout <<"Repeat Your password :";
                    string usr1_pass;cin >> usr1_pass;
                    if(check_Pass(usr_pass,usr1_pass) == true){
                        cout <<"\n\n\n\nRegister successfully\n";
                        cout <<"You sign up account in: ";
                        print_time();
                    }else{
                        cout <<"The password is incorrect!\n";
                        break;
                    }
                    fstream my_file;
                    my_file.open("data",ios::out | ios :: app);
                    my_file << usr_name << '-' << usr_pass << endl;    
                    my_file.close();
        }else if(lc == 1){
            string usr_name;
            cout <<"Your username: ";
            cin >> usr_name;
            string usr_pass;
            cout <<"Your password: ";
            cin >> usr_pass;
            if(checkLogin(usr_name,usr_pass)){
                cout << "\n\n\n\nLogin successfully!\n";
                cout << "You login this account in: ";
                print_time();
            }else{
                cout << "\n\n\nThe password or Username are incorrect";
            }
        }
    }
    

}