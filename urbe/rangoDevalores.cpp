/*
	Elabore un progrmam que permita el ingreso de valoresq que se encuentran fuera de un rango predefinido.
	
	si el valor ingresado no esta en el rango, el programa emite un mensaje de error: 
	**valor ingresado no es valido**
*/

#include <iostream>
using namespace std;

int main(){

	int rSuperior = 20, rInferior = 1, vIn;
	
	cout << "Por favor ingrese un numero: \n"; 
	cin >> vIn ; 
	
	cout << "Por favor ingrese un limite inferior: \n"; 
	cin >> rInferior; 
	
	cout << "Por favor ingrese un limite superior: \n"; 
	cin >> rSuperior; 
	
	
	int i = 0; 
	do{
		if(vIn >= rInferior && vIn <= rSuperior){
			cout << "El numero ingresado forma parte del rago: \n"; 
			return 0;
		}
		cout << "**valor ingresado no es valido** \n";
		cout << "Por favor ingrese otro valor: \n"; 
		cin >> vIn ; 
		
		i++;
	}while(i < 10);
	
	return 0;
}
