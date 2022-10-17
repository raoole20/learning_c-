#include <iostream>

using namespace std;

int main(){
	int vInicial, vFin, impar, par, i;
	impar = 0;
	par = 0;
	
	cout << "Ingrese el valor inicial: \n";
	cin >> vInicial;
	
	cout << "Ingrese el valor Final: \n";
	cin >> vFin;
	
	while( vInicial <= vFin ){ 
		if(vInicial % 2 == 0){
			par++;
		}else{
			impar++;
		}
		vInicial++;
	}
	
	cout << "Hay un total de " << par << " Numero pares \n";
	cout << "Hay un total de " << impar << " Numero impares";
	
	return 0;
	
}
