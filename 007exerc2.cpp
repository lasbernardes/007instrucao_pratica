#include <iostream>

using namespace std;

int main(){
    int nro,nro_aux;
    int nro_invert=0;

    cin>>nro;
    nro_aux=nro;

    while (nro_aux > 0) {
        //cout<<nro_aux%10<<endl;
        //cout<<nro_invert*10<<endl;
        nro_invert = (nro_invert*10) + (nro_aux % 10);
        //cout<<nro_aux/10<<endl;
        nro_aux = nro_aux / 10;
    }

    if(nro==nro_invert){
        cout<<"Palindromo"<<endl;
    }else{
        cout<<"Não palindromo"<<endl;
    }
    return 0;
}