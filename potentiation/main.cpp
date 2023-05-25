#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

float potentialize(float base, int exponent){

    float number = base;

    for (int i = 1; i < exponent; i++)
    {
        number = number * base;
    } 

    return number;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    float base;
    int exponent;

    cout<<"para calcular a potencia de um numero me de... "<<endl<<"O numero a ser potencializado: ";
    cin>>base;
    cout<<"Quantas vezes ele será potencializado: ";
    cin>>exponent;
    cout<<"o "<<base<<" potencializado "<<exponent<<" vezes resulta em: "<<potentialize(base, exponent)<<endl;

    return 0;
}