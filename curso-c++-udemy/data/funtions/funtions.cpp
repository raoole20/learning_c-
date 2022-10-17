#include <iostream>
using namespace std;


// function declaration
// returntype name ( arg )

/*
    functions types

    void function_name ( void)
    int function_name ( void)
    void function_name ( int a, int b )
    int function_name ( int a, int b )
*/

// declaration
void fun ( void );


// Polimorfismo: definir dos funciones con el mismo nombre pero con diferentes acciones
void add(int a, int b);
int add(float a, float b, float c);


int main(){
    cout << "lol";

    fun();
}

// fuction body
void fun(){
    cout << "this comefrom the fun";
}