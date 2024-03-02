#include<iostream>
using namespace std;
void primenumbers(){
   for(int i=1;i<=100;i++){
    int flag=0;
        for(int j=2;j<=(i/2);j++){
            if(i%2==0){
                flag=flag+1;
                break;
            }
        }
        if(flag==0 && i!=1){
            cout<<"PRIME NUMBER IS="<<i<<endl;
        }
    }

}
int main(){
    primenumbers();
    return 0;
}