#include<iostream>
using namespace std;
class hit{
    int number;
    public:
        static int count;
    void get_data(int a){
        number=a;
        count=count+1;
    }
    void show_count(){
        cout<<"count = "<<count<<endl;
    }
};
int hit::count;
int main(){
    hit h1,h2,h3;
    h1.show_count();
    h2.show_count();
    h3.get_data(100);
    h3.show_count();
    h1.show_count();
    return 0;
}