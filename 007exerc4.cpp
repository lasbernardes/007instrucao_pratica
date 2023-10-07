#include<iostream>

using namespace std;

int main(){

    for(int flag,i=1;i<=100;i++,flag=1){
        for(int j=2;j<i;j++){
            if((i%j)==0){
                flag=0;
                break;
            }
            //cout<<i<<endl;
        }
        if(flag){
            cout<<i<<endl;
        }
    }

    return 0;
}