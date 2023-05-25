#include <iostream>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "portuguese");
	char operation;
	float n1, n2, r;
	bool isVal = true;
	
	cout<<"Digite o primeiro numero:";
	cin>>n1;
	cout<<"Digite o segundo numero:";
	cin>>n2;
	cout<<"Digite a operação a ser realizado com os numeros digitados:";
	cin>>operation;
	
	switch(operation) {
		case '+': r = n1 + n2; break;
		case '-': r = n1 - n2; break;
		case '*': r = n1 * n2; break;
		case '/': r = n1 / n2; break;
		default: isVal = false; break;
	}
	
	if(isVal){
		cout<<"o resultado da operação é:"<<r;
	} else {
		cout<<"o resultado da operação é invalido";
	}
	
	return 0;
}
