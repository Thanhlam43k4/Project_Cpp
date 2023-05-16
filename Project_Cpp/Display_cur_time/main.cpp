#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int main(){
    time_t t;
    struct tm * tt;
    time(&t);
    tt = localtime(&t);
    cout <<"Current Day,Date and Time is = " << asctime(tt);
    return 0;

}