#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std; 
int main() {
	setlocale(LC_ALL, "portuguese");
	int ano;
	
	cout<<"insira o ano para saber se ele � bissexto: \n";
	cin>>ano;
	
	if( ano%4 == 0 && ano%100 != 0 || ano%400 == 0  ){		
		cout<<"esse ano � bissexto!!";
	}else {
		cout<<"esse ano n�o � bissexto!!";
	}
	return 0;
}
