#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	float r;
	setlocale(LC_ALL, "portuguese");
	cout<<"Defina o valor de raio para obter a área e a circunferência de um círculo:";
	cin>>r;
	cout<<"A área do círculo é: "<<3.14*(r*r)<<"\nE a circunferência é: "<<2*3.14*r;
	return 0;
}
