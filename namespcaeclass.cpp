#include<iostream>
using namespace std;
namespace classes{
    class student{
    private:
        double roll_no;
        char name[10];
        char section;
    public:
        void enter_data(){
            cout<<" ENTER THE ROLL NUMBER: ";
            cin>>roll_no;
            cout<<" ENTER THE NAME OF A STUDENT: ";
            cin>>name;
            cout<<"ENTER THE SECTION: ";
            cin>>section;
        }
        void get_data(){
            cout<<"ROLL NUMER = "<<roll_no<<"\n";
            cout<<"NAME OF A STUDENT= "<<name<<"\n";
            cout<<"SECTION = "<<section;
        }
};
}
int main(){
    using namespace classes;
    student s;
    s.enter_data();
    s.get_data();
    return 0;
}

