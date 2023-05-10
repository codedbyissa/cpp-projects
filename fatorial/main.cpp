#include <iostream>
using namespace std;

int main() {
	
	int numero, resultado=1;
	setlocale(LC_ALL, "portuguese");
	cout<<"digite o numero a ser fatorado: ";
	cin>>numero;
	
	
	for(int i=numero; i>=1; i--){
		
		resultado = resultado * i; 
	}
	
	cout<<"o resultado foi:"<<resultado;
	return 0;
}
