#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float salario, agua, luz, internet, plano, alimentacao, aluguel;
	
	cout<<"Para c�lcular quanto do sal�rio sobra no final do mes ap�s pagar todas as contas,\nInforme o valor do salario: ";
	cin>>salario;
	cout<<"Agora informe o valor a ser pago da conta de agua: ";
	cin>>agua;
	cout<<"A seguir informe o valor a ser pago da conta de luz: ";
	cin>>luz;
	cout<<"Informe o valor a ser pago da conta de internet: ";
	cin>>internet;
	cout<<"Valor do plano de sa�de: ";
	cin>>plano;
	cout<<"Valor da alimenta��o: ";
	cin>>alimentacao;
	cout<<"E por fim valor do aluguel: ";
	cin>>aluguel;
	cout<<"Ap�s subtrair todos os compromissos financeiros do que � recebido no sal�rio, resta o valor de: R$"
	<<salario - (agua + luz + internet + plano + alimentacao + aluguel);
	
	return 0;
}
