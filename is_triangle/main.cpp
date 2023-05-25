#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

float isTriangle(float a, float b, float c){
    
    return (b - c < a && a < b + c) && (a - c < b && b < a + c) && (a - b < c && c < a + b);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    float lado1, lado2, lado3;
    cout<<"para descobrir se é ou não um triangulo me de..."<<endl<<"o 1ª lado: ";
    cin>>lado1;
    cout<<"o 2ª lado: ";
    cin>>lado2;
    cout<<"o 3ª lado: ";
    cin>>lado3;

    if(isTriangle(lado1, lado2, lado3)){
        cout<<"dado os valores recebidos, esse é um triangulo!"<<endl;
    } else {
        cout<<"dado os valores recebidos, esse não é um triangulo!"<<endl;
    }
    return 0;
}