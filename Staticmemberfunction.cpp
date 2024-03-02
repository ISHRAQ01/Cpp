#include<iostream>
using namespace std;
class Hits{
    int number;
    public:
        static int count;
    public:
        void get_count(){
            number=++count;
        }
        void show_count(){
            cout<<"count number: "<<number<<endl;
        }
        static void set_Count(){
            cout<<"count: "<<count<<"\n";
        }
};
int Hits::count;
int main(){
    Hits h1,h2;
    h1.get_count();
    h1.get_count();
    Hits::set_Count();
    Hits h3;
    h3.get_count();
    Hits::set_Count();
    h1.show_count();
    h2.show_count();
    h3.show_count();
    return 0;
}