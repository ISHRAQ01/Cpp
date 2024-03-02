#include<iostream>
using namespace std;
class sample{
    public:
        sample(){
        cout<<"OBJECT CREATED"<<"\n";
        }
        ~sample(){
            cout<<"OBEJECT DESROYED\n";
        }
};
int main(){
    sample s1,s2,s3,s4;
    return 0;
}