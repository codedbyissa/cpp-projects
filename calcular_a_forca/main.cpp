#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float M, A, F;
	cout<< "Calcule o valor da for�a de um corpo com base na sua massa e acelera��o\nMassa: ";
	cin>> M;
	
	cout<< "Acelera��o: ";
	cin>> A;
	
	F = M * A;
	
	cout<< "o resultado �: " <<F;

	return 0;
}
