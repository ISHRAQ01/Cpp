#include<iostream>
using namespace std;

class sample{
    int id;
    public:
        sample(){};
        sample(int a){
            id=a;
        }
        sample(sample &t){
            id=t.id;
        }
        void display(){
            cout<<"VALUE OF ID IS= "<<id<<endl;
        }
};
int main(){
    sample A(100); //parameterised const. is called
    sample B(A);
    sample C=A;
    cout<<"OBEJCT A";
    A.display();
    cout<<"OBEJCT B";
    B.display();
    cout<<"OBJECT C";
    C.display();
    return 0;
}