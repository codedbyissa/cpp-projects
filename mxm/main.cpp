#include <iostream>
using namespace std;

int main() {
	
	int numero, resultado=1;
	setlocale(LC_ALL, "portuguese");
	int maior, menor, input;

			
	for(int i=1; i<=15; i++){
		
		cout<<"Digite o "<<i<<"� numero: ";
		cin>>input;
		
		if(input > maior || maior == NULL){
			
			maior = input;
			
		} 
		
		if(input < menor || menor == NULL){
			
			menor = input;
			
		}
	}
	
	cout<<"dos numeros digitados, o maior � "<<maior<<" e o menor � "<<menor;
	
	return 0;
}
