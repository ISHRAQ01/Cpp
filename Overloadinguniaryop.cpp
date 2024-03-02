#include<iostream>
using namespace std;

class Direction{
    int x,y,z;
    public:
        void get_data(int,int,int);
        void operator-();
        void display();
};
void Direction::get_data(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}
void Direction::operator-(){
    x=-x;
    y=-y;
    z=-z;
}
void Direction::display(){
    cout<<"VALUE OF X= "<<x<<endl;
    cout<<"VALUE OF Y= "<<y<<endl;
    cout<<"VALUE OF Z= "<<z<<endl;
}
int main(){
    Direction d;
    d.get_data(10,-20,30);
    cout<<"VALUE OF X,Y,Z BEFORE UPDATION= "<<endl;
    d.display();
    cout<<"VALUE OF X,Y,Z AFTER UPDATION= "<<endl;
    -d;
    d.display();
    return 0;

}