/*
Elabore un programa que, de una lista de datos ingresadoa por teclado, obtenga el menor y elmayor valor. 
La cantidad de valores a ingresar es especificada por el usario
*/


#include <iostream>

using namespace std;


int main() { 
	int arrayValue, n, i, suma;
	
	cout << "Por favor ingrese el tamaño del array" << endl;
	cin >> n;
	
	int array[i];
	
	for(i = 0; i < n; i++){ 
		int valueIn;
		cout << "ingrese el valor: " << endl;
		cin>> valueIn;

		
		array[i] = valueIn;	
	}
	
	int max_value = array[0], min_value = array[0];
	
	for(i = 0; i < n; i++){ 
		cout << 1 + i << ": " << array[i]  << endl;
		
		if(valueIn > max_value){
			max_value = valueIn;
		} 
		if(valueIn < min_value){
			min_value = valueIn;
		}
	}
	
	cout << "Valor max: " << max_value << endl;
	cout << "Valor min: " << min_value << endl;
	
}
