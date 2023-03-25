#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float M, A, F;
	cout<< "Calcule o valor da força de um corpo com base na sua massa e aceleração\nMassa: ";
	cin>> M;
	
	cout<< "Aceleração: ";
	cin>> A;
	
	F = M * A;
	
	cout<< "o resultado é: " <<F;

	return 0;
}
