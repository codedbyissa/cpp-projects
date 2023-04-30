#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int cod;
	cout<<"Insira o código do produto para obter sua classificação: ";
	cin>>cod;
	
	switch(cod){
		case 1: cout<<"Alimento não-perecível"; break;
		case 2 ... 4: cout<<"Alimento perecível"; break;
		case 5 ... 6: cout<<"Vestuário"; break;
		case 7: cout<<"Higiene Pessoal"; break;
		case 8 ... 15: cout<<"Limpeza e Utensílios Domésticos"; break;
		default: cout<<"Código Invalido"; break;
	}
	return 0;
}
