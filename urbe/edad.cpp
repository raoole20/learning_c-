#include <iostream>
using namespace std;

int main(){
	int edad;
	string tecla;
	
	cout << "Ingrese la edad:";
	cin >> edad;

	if(edad > 20 ) 
		cout << "Mayor de edad" << endl;
	else
		cout << "Menor de edad" << endl;

	cout << "Precione una tecla para terminar:";
	cin >> tecla;		

	system("pause");
	return 0;
}
