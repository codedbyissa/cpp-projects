#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

	class User{
		
	private:
		
	int id;
	string name;
	string user;
	string pass;
	
	static int nextId;
	
	public:
		
	User(string n, string u, string p){
		id = nextId++;
		name = n;
		user = u;
		pass = p;
	}
	
	void welcome(){
		cout<<"Bem-vindo(a)" << name <<endl;
	}
	
	};
	
	
	int User::nextId = 1;
		
	User u1("administrador", "admin", "password");
	User u2("Hayssa Maria Gomes da Silva", "byissa", "123abc");
	User u3("Usuario numero 2", "user", "upass");
	
	User createUser(string name, string user, string pass) {
    User newUser(name, user, pass);
    return newUser;
}


