#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double priceDolar = 8.04, promedio_a, promedio_b, diferencia;
	string DAYS[7] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo" };
	
	// array precios
	double panaderia_a[7], panaderia_b[7];
	
	cout << "Por favor ingresa consecutivamente los precios de la panaderia A en bs" << endl;
	
	for(int i = 0; i < 7; i++){
		cout << DAYS[i] << " :  "; 
		cin >> panaderia_a[i];
		
		cout << "\n" << endl;
	}
	
	cout << "Por favor ingresa consecutivamente los precios de la panaderia B en $"  << endl;
	
	for(int i = 0; i < 7; i++){
		cout << DAYS[i] << " :  "; 
		cin >> panaderia_b[i];
	}
	
	double acumulador_a, acumulador_b;
	
	//calcular el promedio de los días
	for(int i = 0; i < 7; i++){
		acumulador_a += panaderia_a[i];
		acumulador_b += panaderia_b[i];
	}
	
	promedio_a = acumulador_a / 7; // esta en bs
	promedio_b = acumulador_b / 7; // esta en $
	
	double promedio_aUSD = promedio_a * priceDolar;
	double fivePorciento_a = promedio_aUSD * 0.5;  // con respecto al 5% se evalaruá si es indiferente
	
	// si promedio a - promedio b < al 5% del promedio de a
	// entonces es indiferente en cual comprar
	if( abs(promedio_b - promedio_aUSD) < fivePorciento_a ){
		cout << "\n\n**************************************************" << endl;
		cout << "Es indiferente comprar en la panaderia A o en la panaderia B" << endl;
		cout << "**************************************************" << endl;
		return 0;
	}
	
	// si el promedio de a es menor que el promedio de b
	// entonces es mejor comprar en a
	if(promedio_aUSD < promedio_b ){
		cout << "\n\n**************************************************" << endl;
		cout << "Es mejor comprar en la panaderia a" << endl;
		cout << "**************************************************" << endl;
		return 0;
	}
	
	// si el promedio de b es menor al promedio de a 
	// entonces es mejor comprar en b
	if(promedio_b < promedio_aUSD){
		cout << "\n\n**************************************************" << endl;
		cout << "Es mejor comprar en la panaderia B" << endl;
		cout << "**************************************************" << endl;
		return 0;
	}
}
