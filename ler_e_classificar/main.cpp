#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int cod;
	cout<<"Insira o c�digo do produto para obter sua classifica��o: ";
	cin>>cod;
	
	switch(cod){
		case 1: cout<<"Alimento n�o-perec�vel"; break;
		case 2 ... 4: cout<<"Alimento perec�vel"; break;
		case 5 ... 6: cout<<"Vestu�rio"; break;
		case 7: cout<<"Higiene Pessoal"; break;
		case 8 ... 15: cout<<"Limpeza e Utens�lios Dom�sticos"; break;
		default: cout<<"C�digo Invalido"; break;
	}
	return 0;
}
