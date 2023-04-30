#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	cout<<"digite o numero equivalente ao mês do ano que deseja receber:";
	cin>>mes;
	
	switch(mes){
		case 1: cout<<"o mês equivalente é Janeiro"; break;
		case 2: cout<<"o mês equivalente é Fevereiro"; break;
		case 3: cout<<"o mês equivalente é Março"; break;
		case 4: cout<<"o mês equivalente é Abril"; break;
		case 5: cout<<"o mês equivalente é Maio"; break;
		case 6: cout<<"o mês equivalente é Junho"; break;
		case 7: cout<<"o mês equivalente é Julho"; break;
		case 8: cout<<"o mês equivalente é Agosto"; break;
		case 9: cout<<"o mês equivalente é Setembro"; break;
		case 10: cout<<"o mês equivalente é Outubro"; break;
		case 11: cout<<"o mês equivalente é Novembro"; break;
		case 12: cout<<"o mês equivalente é Dezembro"; break;
		default: cout<<"Invalido, não existe um mês equivalente ao numero "<<mes; break;
	}
	return 0;
}
