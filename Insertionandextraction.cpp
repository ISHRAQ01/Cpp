#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
        person(string s,int a){
            name=s;
            age=a;
        }
        friend ostream &operator<<(ostream &output,person &p);
        friend istream &operator>>(istream &input,person &p);
};
ostream &operator<<(ostream &output,person &p){
    output<<"hello\n";
    output<<"my name is "<<p.name<<" and my age is "<<p.age<<"\n";
    return(output);
}
istream &operator>>(istream &input,person &p){
    input>>p.name>>p.age;
    return(input);
}
int main(){
    person p("ISHRAQ",18);
    cin>>p;
    cout<<p;
    return 0;
}