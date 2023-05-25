#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
using namespace std;

bool verify(string user, string password) {
	
	string title = "CARRINHO DE COMPRAS BY ISSA";
	string sucess = "Usuário logado com sucesso!";
    int largura = 40;  
	
	if(user == "admin" && password == "123abc") {
		system("cls");
	
		cout << setw(largura) << setfill('-') << "" << endl;
	    cout << setw((largura + title.length()) / 2) << setfill(' ') << title << endl; // title centralizado
	    cout << setw(largura) << setfill('-') << "" << endl;
		cout << setw((largura + sucess.length()) / 2) << setfill(' ') << sucess<<"\n" << endl;
		return true;
	} 
	
	return false;
}

void authenticate(){
	setlocale(LC_ALL, "portuguese");
	
	string title = "CARRINHO DE COMPRAS BY ISSA";
	string error = "Usuário ou senha invalidos!";
	string login = "LOGIN";
    int largura = 40;
	
	cout << setw(largura) << setfill('-') << "" << endl;
    cout << setw((largura + title.length()) / 2) << setfill(' ') << title << endl; // title centralizado
    cout << setw(largura) << setfill('-') << "" << endl;  
    cout << setw((largura + login.length()) / 2) << setfill(' ') << login<<"\n \n" << endl;
    
    string user, password;
	
	cout<<"User: ";
	cin>>user;
	cout<<"Password: ";
	cin>>password;
	
    while (!verify(user, password)) {
        system("cls");       
		
		cout << setw(largura) << setfill('-') << "" << endl;
	    cout << setw((largura + title.length()) / 2) << setfill(' ') << title << endl; // title centralizado
	    cout << setw(largura) << setfill('-') << "" << endl;  
	    cout << setw((largura + login.length()) / 2) << setfill(' ') << login<<"\n \n" << endl;
   		cout << setw((largura + error.length()) / 2) << setfill(' ') << error<<"\n \n" << endl;

		cout<<"User: ";
		cin>>user;
		cout<<"Password: ";
		cin>>password;
    }
}


