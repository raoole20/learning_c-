#include <iostream>

using namespace std;


int main() { 

//?	para obtener el tama�o de un arreglo uso  sizeof(ARRAY)	
	int array[10];
	cout << "el tama�o del arreglo es: " << sizeof(array);

	for(int i = 0; i < sizeof(array); i++){ 
		cout << "Se a�ade el numero: " << i << endl;
		
		array[i] = i;
	}
	
	return 0;
}
