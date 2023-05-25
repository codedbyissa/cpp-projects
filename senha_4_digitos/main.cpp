#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguse");

    int pass=1234, input;
    
    while (input != pass)
    {
        cout<<"Digite a Senha: ";
        cin>>input;

        if(pass != input){
            cout<<"Senha Incorreta"<<endl;
        } else {
            cout<<"Senha Correta"<<endl;
        }
    }
    
    

    return 0;
}