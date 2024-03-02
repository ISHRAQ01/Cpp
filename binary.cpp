#include<iostream>
using namespace std;
class complex{
    double real;
    double imag;
    public:
        void get_data(double m,double n){
            real=m;
            imag=n;
        }
        void show(){
            cout<<"REAL= "<<real<<" IMAG= "<<imag<<endl;
        }
        friend complex operator +(complex,complex);
};
complex operator +(complex a,complex b){
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return(temp);
}
int main(){
    complex a,b,c;
    a.get_data(4.0,5.0);
    a.show();
    b.get_data(4.0,5.1);
    b.show();
    c=a+b;
    c.show();
    return 0;
}