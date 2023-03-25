#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float valor;
	cout<<"Para obter um desconto de 5%, insira\nO valor do produto: ";
	cin>>valor;
	cout<<"O desconto foi aplicado e o valor final da compra é de: R$"<<valor - ((valor*5)/100);
	return 0;
}

