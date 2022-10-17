#include <iostream>

using namespace std;


int main() { 
	
	int array[10], i, suma;
	cout << "Ingrese los datos" << endl;

	for(i = 0; i < 10; i++){ 
		cout << "ingrese el valor: " << endl;
		cin>> array[i];
	}
	
	cout << "El array tiene los siguientes valores " << endl;
			
	for(i = 0; i < 10; i++){ 
		cout << 1 + i << ": " << array[i]  << endl;
	}
	
	for(i=0; i<10; i++)  {
		suma += array[i];    // suma = suma + lista[i];    
//		system("cls");   
		cout << "LA SUMA DE LOS ELEMENTOS = " << suma << endl;   
		system("pause");
	}
	        
	return 0;
}
