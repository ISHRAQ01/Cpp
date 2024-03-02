#include<iostream>
using namespace std;

class Complexnumber{
    private:
        double real;
        double imaginary;
    public:
        void getcomplex(){
        cout<<"ENTER THE COMPLEX NUMBER: "<<"\n";
        cin>>real;
        cin>>imaginary;
        }
    friend void sumcomplex(Complexnumber,Complexnumber);
};
void sumcomplex(Complexnumber A,Complexnumber B){
    if(A.imaginary <0 && A.imaginary> B.imaginary){
    cout<<"SUM OF TWO COMPLEX NUMBER IS: "<<(A.real+B.real)<<(A.imaginary+B.imaginary)<<"i";
    }
    else{
        cout<<"SUM OF TWO COMPLEX NUMBER IS: "<<(A.real+B.real)<<"+"<<(A.imaginary+B.imaginary)<<"i";
    }
}

int main(){
    Complexnumber n1;
    Complexnumber n2;
    n1.getcomplex();
    n2.getcomplex();
    sumcomplex(n1,n2);
    return 0;
}