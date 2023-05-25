#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
using namespace std;

int menuMain() {
	
	string menu = "MENU";
    int largura = 40;  
	
	cout << setw((largura + menu.length()) / 2) << setfill(' ') << menu << endl;
	
	return 0;
}
