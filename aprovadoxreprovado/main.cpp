#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	char nota;
	
	cout << "insira sua nota e descubra se você foi aprovado ou reprovado : \n";
	cin >> nota;
	
	if(nota == 'A' || nota == 'B' || nota == 'C'){
		cout << "APROVADO";
	} else if(nota == 'D' || nota == 'E' ) {
		cout << "REPROVADO";
	} else {
		cout << "VALOR INVALIDO PARA NOTA";
	}
	
	return 0;
}
