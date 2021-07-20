#include <iostream>

using namespace std;

int main()
{

    int premier_nombre;
	int deuxieme_nombre;
    char operation('+' || '-' || '*' || '/');
    
	system("color D");
	cout << "entrer le calul que vous voulez effectuez : " << "\n| Aide : + = addition | - = soustraction | x = multiplication | % = division |" << endl;
    cin >> premier_nombre >> operation >> deuxieme_nombre;

	if (operation == '+') {
		int const resultat1 = premier_nombre + deuxieme_nombre;
		cout << resultat1 << endl;
	}
	else if (operation == '-') {
		int const resultat2 = premier_nombre - deuxieme_nombre;
		cout << resultat2 << endl;
	}
	else if (operation == 'x') {
		int const resultat3 = premier_nombre * deuxieme_nombre;
		cout << resultat3 << endl;
	}
	else if (operation == '%') {
		int const resultat4 = premier_nombre / deuxieme_nombre;
		cout << resultat4 << endl;
	}
	else {
		cout << "une erreur a ete commise..." << endl;
	}

    system("pause");
    return 0;
}
