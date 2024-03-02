#include<iostream>
using namespace std;
namespace first{
    void fun(){
        cout<<"FIRST";
    }
    namespace second{
        void fun(){
            cout<<"SECOND";
        }
    }
}
int main(){
    using namespace first::second;
    fun();
    return 0;
}