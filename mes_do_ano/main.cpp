#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	cout<<"digite o numero equivalente ao m�s do ano que deseja receber:";
	cin>>mes;
	
	switch(mes){
		case 1: cout<<"o m�s equivalente � Janeiro"; break;
		case 2: cout<<"o m�s equivalente � Fevereiro"; break;
		case 3: cout<<"o m�s equivalente � Mar�o"; break;
		case 4: cout<<"o m�s equivalente � Abril"; break;
		case 5: cout<<"o m�s equivalente � Maio"; break;
		case 6: cout<<"o m�s equivalente � Junho"; break;
		case 7: cout<<"o m�s equivalente � Julho"; break;
		case 8: cout<<"o m�s equivalente � Agosto"; break;
		case 9: cout<<"o m�s equivalente � Setembro"; break;
		case 10: cout<<"o m�s equivalente � Outubro"; break;
		case 11: cout<<"o m�s equivalente � Novembro"; break;
		case 12: cout<<"o m�s equivalente � Dezembro"; break;
		default: cout<<"Invalido, n�o existe um m�s equivalente ao numero "<<mes; break;
	}
	return 0;
}
