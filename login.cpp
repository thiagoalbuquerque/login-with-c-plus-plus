#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	
	string login;
	int senha;
	cout << "Painel Administrativo \nDigite o seu login: " << endl;
	cin >> login;
	cout << "Digite a sua senha: ";
	cin >> senha;
	if((login == "admin" || login == "ADMIN") && senha == 123)
		cout << "Autenticado!" << endl;
		
	else 
		cout << "Acertou Mizeravi!" << endl;
		system("PAUSE");
		return 0;
		
}

