#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float c1, c2, c3;
	cout<<"para converter c�lsius em fahrenheit, insira o primeiro, segundo e terceiro valor, separando com a tecla ESPA�O: ";
	cin>>c1>>c2>>c3;
	cout<<"O resultado da conver��o para o primeiro valor inserido �: "<<c1 * (9/5) + 32
	<<"\nO resultado da conver��o para o segundo valor inserido �: "<<c2 * (9/5)  + 32
	<<"\nO resultado da conver��o para o terceiro valor inserido �: "<<c3 * (9/5) + 32;
	return 0;
}
