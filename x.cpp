#include<iostream>
using namespace std;
int a;
int& set(){
    return a;
}
int main(){
    cout<<set()<<endl;
    // set()=20;
    // cout<<a<<endl;
    int& b= set();
    b=50;
    cout<<set()<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;


    return 0;
}