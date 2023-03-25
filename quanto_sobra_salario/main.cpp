#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	float salario, agua, luz, internet, plano, alimentacao, aluguel;
	
	cout<<"Para cálcular quanto do salário sobra no final do mes após pagar todas as contas,\nInforme o valor do salario: ";
	cin>>salario;
	cout<<"Agora informe o valor a ser pago da conta de agua: ";
	cin>>agua;
	cout<<"A seguir informe o valor a ser pago da conta de luz: ";
	cin>>luz;
	cout<<"Informe o valor a ser pago da conta de internet: ";
	cin>>internet;
	cout<<"Valor do plano de saúde: ";
	cin>>plano;
	cout<<"Valor da alimentação: ";
	cin>>alimentacao;
	cout<<"E por fim valor do aluguel: ";
	cin>>aluguel;
	cout<<"Após subtrair todos os compromissos financeiros do que é recebido no salário, resta o valor de: R$"
	<<salario - (agua + luz + internet + plano + alimentacao + aluguel);
	
	return 0;
}
