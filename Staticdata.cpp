#include<iostream>
using namespace std;

class Hits
{
private:
    int numbers;
public:
   static int count;
   void get_data(int a){
    numbers=a;
    count++;
   }
   void get_count(){
    cout<<"count= "<<count<<endl;
   }
};
int Hits::count;
int main(){
    Hits h1,h2,h3;
    h1.get_count();
    h2.get_count();
    h3.get_count();
    h1.get_data(100);
    h2.get_data(200);
    h3.get_data(300);
    cout<<"After reading data count= \n";
    h1.get_count();
    h2.get_count();
    h3.get_count();
}