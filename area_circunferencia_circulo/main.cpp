#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	float r;
	setlocale(LC_ALL, "portuguese");
	cout<<"Defina o valor de raio para obter a �rea e a circunfer�ncia de um c�rculo:";
	cin>>r;
	cout<<"A �rea do c�rculo �: "<<3.14*(r*r)<<"\nE a circunfer�ncia �: "<<2*3.14*r;
	return 0;
}
