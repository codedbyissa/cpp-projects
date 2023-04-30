#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float n1, n2, m;
	int r;
	
	cout<<"insira a primeira nota: ";
	cin>>n1;
	cout<<"insira a segunda nota: ";
	cin>>n2;
	
	m = (n1+n2)/2;
	
	if(m <= 4){
		r = 1;
	} else if(m >= 4.1 || m <= 7){
		r = 2;
	} else if(m >= 7.1 || m <= 10){
		r = 3;
	}
	
	switch(r){
	 case 1: cout<<"Com base na media: "<<m<<", o aluno está reprovado."; break;
	 case 2: cout<<"Com base na media: "<<m<<", o aluno está elegível para realizar um novo exame e recuperar a notaS."; break;
	 case 3: cout<<"Com base na media: "<<m<<", o aluno está aprovado"; break;
	}
	
	return 0;
}
