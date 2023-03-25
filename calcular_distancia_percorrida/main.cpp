#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float ace, vel, pIN, iT, R;
	cout<< "Para calcular a distância percorrida\nInsira o valor da aceleração: ";
	cin>> ace;
	
	cout<< "Insira o valor da velocidade: ";
	cin>> vel;
		
	cout<< "Insira o valor da posição inicial: ";
	cin>> pIN;
		
	cout<< "Insira o valor do intervalo de tempo: ";
	cin>> iT;
	
	R = (pIN + vel) * iT + ace *((iT*iT)/2);
	
	cout<< "o resultado é: " <<R;

	return ace;
}


