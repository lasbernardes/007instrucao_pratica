#include <iostream>

using namespace std;

int main(){

    for(int flag,i=1;i<=100;i++,flag=0){
        if((i%3)==0){
            cout<<i;
            cout<<"Fizz";
            flag=1;
            if((i%5)==0){
                cout<<"Buzz";
                flag=1;
            }
        }
        if(flag){
            cout<<endl;
        }
    }

    return 0;
}