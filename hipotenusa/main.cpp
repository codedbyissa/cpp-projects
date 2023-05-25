#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

float hipotenusa(float a, float b){

    float calc = pow(a, 2) + pow(b, 2);
    return sqrt(calc);

}

int main(){
    setlocale(LC_ALL, "portuguese");
    float lado1, lado2;
    cout<<"para calcular o valor da hipotenusa me de... "<<endl<<"o valor do 1ª lado: ";
    cin>>lado1;
    cout<<"o valor do 2ª lado: ";
    cin>>lado2;

    cout<<"o resultado é: "<<hipotenusa(lado1, lado2)<<endl;

   return 0;

}