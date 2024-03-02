#include<iostream>
using namespace std;
namespace first{
    void display(){
        cout<<"INSIDE FIRST NAMESPACE";
    }
    namespace second{
        void display(){
            cout<<"INNNER SECOND NAMESPCAE";
        }
    }
}

int main(){
    using namespace first::second;
    display();
    return 0;
}