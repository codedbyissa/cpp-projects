#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int size=0;
    float media=0, input;

    while(input > 0)
    {
        cout<<"insira o "<<size+1<<"ª numero: ";
        cin>>input;
        if(input > 0){
        media += input;
        size++;        
        }       
    }
    
    if(input < 0){
        cout<<"numero inserido menor que 0, não aceito";
    } else {
        cout<<"foram inseridos "<<size<<" numeros e a media destes é: "<<media / size<<endl;
    }

    return 0;
}