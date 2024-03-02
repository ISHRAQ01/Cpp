#include<iostream>
#include<string.h>
using namespace std;
class merge{
    char str[30];
    public:
        void get_string(){
            cout<<"ENTER THE STRING: "<<endl;
            cin>>str;
        }
        void display(){
            cout<<str;
        }
        friend merge operator+(merge,merge);
};
merge operator+(merge m1,merge m2){
    strcat(m1.str,m2.str);//concatenating string
    merge m3;
    strcpy(m3.str,m1.str); //copying concatenating string to m1
    return (m3);
}
int main(){
    merge m1,m2,m3;
    m1.get_string();
    m2.get_string();
    cout<<"FIRST STRING= \n";
    m1.display();
    cout<<"\nSECOND STRING=";
    m2.display();
    m3=m1+m2;
    cout<<"\nCONCATENATED STRING= ";
    m3.display();
    return 0;
}