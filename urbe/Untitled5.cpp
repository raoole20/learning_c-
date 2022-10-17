/*
	programa que permita leer una letra y mostrar palabras para la 
		A: aguila
		B: bebesita
		c: cabllasho
		D: detergente
		E: esperanza
	
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){ 
	char letra;
	string continuar;
	
	do{
		cout << "Dame una letra: \n";
	    letra = getchar();
	
	    getchar();
		switch(letra){
		case 'a': 
			cout << "Aguilita" << endl;
			break;
		case'b': 
			cout << "Banquita" << endl;
			break;
		case'c': 
			cout << "caballasho" << endl;
			break;
		case 'e': 
			cout << "esperanza" << endl;
			break;
		default: 
			cout << "no hay" <<  endl;
		}
		
		cout << "Desea continuar \n";
		cin >> continuar;
	
	}while(continuar ==	"si");
	
	system("pause");
	return 0;
}
