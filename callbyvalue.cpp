#include<iostream>
using namespace std;
int sum(int a,int b){
    int s;
    s=a+b;
    return s;
}
int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a:";
    cin>>a;
    cout<<"ENTER THE VALUE OF b:";
    cin>>b;
    cout<<"THE SUM OF TWO NUMBERS a+b IS="<<sum(a,b);
    return 0;
}