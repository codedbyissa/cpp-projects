#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
		
	int fabricado, atual, resultado;
	
	cout<<"Para saber se o produto est� na validade informe... \nAno de fabrica��o: ";
	cin>>fabricado;
	cout<<"Ano Atual: ";
	cin>>atual;
	resultado=atual - fabricado;
	
	if(resultado > 1) {
		cout<<"O produto venceu h� "<< resultado - 1 << " ano(s)";
	} else {
		cout<<"O produto ainda n�o venceu, ele tem "<< resultado + 1 << " ano(s) para vencer";
	}
	
	return 0;
}
