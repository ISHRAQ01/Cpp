#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a:";
    cin>>a;
    cout<<"ENTER THE VALUE OF b:";
    cin>>b;
    cout<<"BEFORE SWAP VALUE OF A AND B ARE: "<<a<<"\t"<<b;
    swap(a,b);
    cout<<"AFTER SWAP VALUE OF A AND B ARE: "<<a<<"\t"<<b;
    return 0;
}