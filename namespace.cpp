#include<iostream>
using namespace std;
namespace function{
    float add(float a,float b){
        return(a+b);
    }
    float divide(float a,float b){
        return(a/b);
    }
    float sub(float a,float b){
        return(a-b);
    }
    float multiply(float ,float);
}
float function::multiply(float a,float b){
    return(a*b);
}
int main(){
    using namespace function;
    cout<<"ADDITION OF TWO NUMBER= "<<add(5,2)<<"\n";
    cout<<"SUBTRACTION OF TWO NUMBER= "<<sub(10,4)<<"\n";
    cout<<"DIVIDATION OF TWO NUMBER= "<<divide(20,2)<<"\n";
    cout<<"MULTIPLICATION OF TWO NUMBER= "<<multiply(28,4)<<"\n";
    return 0;
}

