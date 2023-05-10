#include <iostream>
using namespace std;

int main(){
	
	for(int i=0; i<=9; i++){
		
		setlocale(LC_ALL, "portuguese");
		
		cout<<"ESSA É A TABUADA DO "<<i<<":"<<endl;
		
		for(int a=0; a<=10; a++){
			
			cout<<i<<" x "<<a<<" = "<<i * a<<endl;
		}
		
		cout<<endl;
	}
	
	return 0;
}
