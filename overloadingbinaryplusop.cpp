#include<iostream>
using namespace std;
class complex{
    float real,imag;
    public:
        complex(){};
        complex(float x){
            real=x;
            imag=0;
        }
        complex(float x,float y){
            real=x;
            imag=y;
        }
        complex operator+(complex);
        void display(){
            cout<<real<<"+i"<<imag<<"\n";
        }
};
complex complex::operator+(complex c){
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return(temp);
}
int main(){
    complex s1,s2,s3;
    s1=complex(2.3);
    s2=complex(1.03,3.04);
    s3=s1+s2; //s1.operator+(s2);
    cout<<"s1= ";
    s1.display();
    cout<<"s2= ";
    s2.display();
    cout<<"s3= ";
    s3.display();
    return 0;
}