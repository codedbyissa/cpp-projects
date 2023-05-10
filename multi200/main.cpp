#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float valor;
	
	cout<<"insira o valor ";
	cin>> valor;
	
	for (int i=1;i<=200;i++){
		
		cout<<i<<" = "<<valor*i<<" ";
		
		if(i % 10 == 0){			
		 cout<<endl;
		}
		
	}
	
}
