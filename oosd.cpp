#include <iostream>
using namespace std;
int n = 6;
int& setn(){
    // int n = 4;
    cout<<&n<<endl;
    n = 200;
    return n;

}
int& findlargest(int& a,int& b){
    if (a>b)
    {
        /* code */
        return a;
    }else{
        return b;
    }
    
}
int main(){
    // cout<<setn()<<endl;
    // int &m = setn();
    // cout<<&m<<endl;
    // cout<<m<<endl;

    // m=19;
    // cout<<m<<endl;
    int x=10;
    int y=20;
    int& largest = findlargest(x,y);
    largest=30;
    cout<<"the value of x and y is "<<x<<" "<<y<<endl;

    return 0;
}