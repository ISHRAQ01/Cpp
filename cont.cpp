#include<iostream>
using namespace std;
class sample{
    int id;
    public:
        sample(){
            id=0;
        }
        sample(int n){
            id=n;
        }
        sample(sample &t){
            id=t.id;
        }
        void show(){
            cout<<"value of id= "<<id<<endl;
        }
};
int main(){
    sample A(100);
    sample B(A);
    sample C=A;
    A.show();
    B.show();
    C.show();
    return 0;
}