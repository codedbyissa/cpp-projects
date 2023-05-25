#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int selected;

    cout<<"Escolha uma opção no menu: ";
    cin>>selected;

  while (selected > 1 || selected < 0)
  {
    cout<<"Opção digitada inexistente, escolha outra: ";
    cin>>selected;
  }

  cout<<"A opção digitada foi: "<<selected<<endl;
  
    return 0;
}