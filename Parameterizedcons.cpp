#include<iostream>
using namespace std;

class Demo{
    int m,n;
    public:
        Demo(int,int);//declaration of parameterised constructor
        void display(){
            cout<<"M= "<<m<<"\n";
            cout<<"N= "<<n<<"\n";
        }
};
Demo::Demo(int x,int y){
    m=x;
    n=y;
}
int main(){
    Demo d1(10,20);//implicitly calling
    Demo d2=Demo(30,40);//explicitly calling
    cout<<"OBJECT 1\n";
    d1.display();
    cout<<"OBJECT 2\n";
    d2.display();
    return 0;
}