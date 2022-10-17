//PROGRAMA QUE IMPRIME EN 
//PANTALLA 10 VECES LA PALABRA PRUEBA #include <cstdio>


// pendiente hacer lo mismo pero con el do while y el while

 #include <iostream> 
 using namespace std;

 int main(){
 	// declaraci�n variables j
	int valorInicial, valorFinal; 
	int contadorPar, contadorInpar;
	
	cout << "Valor final ";
	cin >> valorFinal;
	
	cout << "Ingrese el valor inicial ";
	cin >> valorInicial;
	
	// instrucci�n for 
	for(int x=valorInicial;x<=valorFinal;x++){
		if(x % 2 == 0){
			contadorPar = contadorPar + 1 ;
		}else 
			contadorInpar = + 1;
	}  
  
  	cout <<  contadorPar << endl;
  	cout << contadorInpar << endl;
  	
	system("pause"); 
	return 0;
 }
