#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
		
	int fabricado, atual, resultado;
	
	cout<<"Para saber se o produto está na validade informe... \nAno de fabricação: ";
	cin>>fabricado;
	cout<<"Ano Atual: ";
	cin>>atual;
	resultado=atual - fabricado;
	
	if(resultado > 1) {
		cout<<"O produto venceu há "<< resultado - 1 << " ano(s)";
	} else {
		cout<<"O produto ainda não venceu, ele tem "<< resultado + 1 << " ano(s) para vencer";
	}
	
	return 0;
}
