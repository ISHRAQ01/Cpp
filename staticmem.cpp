#include<iostream>
using namespace std;
class hit{
    int number;
    public:
        static int count;
    void get_data(){
        number=++count;
    }
    void show_count(){
        cout<<"count = "<<number<<endl;
    }
    static void get_count(){
        cout<<"count= "<<count<<endl;
    }
};
int hit::count;
int main(){
    hit h1,h2;
    h1.show_count();
    h2.show_count();
    hit::get_count();
    hit h3;
    h3.show_count();
    hit::get_count();
    h1.show_count();
    h2.show_count();
    h3.show_count();
    return 0;
}