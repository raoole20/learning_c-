#include <iostream>

using namespace std;


int main() { 

//?	para obtener el tamaño de un arreglo uso  sizeof(ARRAY)	
	int array[10];
	cout << "el tamaño del arreglo es: " << sizeof(array);

	for(int i = 0; i < sizeof(array); i++){ 
		cout << "Se añade el numero: " << i << endl;
		
		array[i] = i;
	}
	
	return 0;
}
