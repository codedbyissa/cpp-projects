#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float c1, c2, c3;
	cout<<"para converter célsius em fahrenheit, insira o primeiro, segundo e terceiro valor, separando com a tecla ESPAÇO: ";
	cin>>c1>>c2>>c3;
	cout<<"O resultado da converção para o primeiro valor inserido é: "<<c1 * (9/5) + 32
	<<"\nO resultado da converção para o segundo valor inserido é: "<<c2 * (9/5)  + 32
	<<"\nO resultado da converção para o terceiro valor inserido é: "<<c3 * (9/5) + 32;
	return 0;
}
