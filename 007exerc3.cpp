#include<iostream>

using namespace std;

int main(){
    int nro;
    cin>>nro;
    for(int i=1;i<=nro;i++){
        if((nro%i)==0){
            cout<<i<<endl;
        }

    }
    return 0;
}