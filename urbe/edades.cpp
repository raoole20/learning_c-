/* 
Elabore un programa que, dada la edad de una persona, indique si es :

un ni�o (hasta 12 a�os)
un joven (hasta 18a�os)
un adulto (hasta  70 )
un adulto mayor 

*/

#include <cstdio>
#include <iostream> 
using namespace std;

int main(){
	int edad;
	string tecla;
	
	cout <<"Ingrese la edad:";
	cin >> edad;

	if(edad < 12 ) 
		cout << "Es un ni�o" << endl;
	else if(edad < 18 )
		cout << "es un joven" << endl;
	else if(edad < 70 )
		cout << "es un adulto" << endl;
	else 
		cout << "es un adulto mayor";		

	system("pause");
	return 0;
}
