#include<iostream>
using namespace std;
enum week{
    sunday,monday,tuesday,wednesday,thursday,friday=9,saturday
};
int main(){
week day;
day=friday;
cout<<day;
return 0;
}