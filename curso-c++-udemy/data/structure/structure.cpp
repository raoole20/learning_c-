/**
 ** Difene structure
 * funciona como si fuera una interfaz de javascript, predefiniendo variables que luego serán 
 * utilizadas en x porpeidad
 * 
 * 
 ** Definition of a variable -------------------------------------------------------------------
 * 
 * "struct name" + variable name;
 * example person pVar;
 * 
 ** Defination of propertys --------------------------------------------------------------------
 * 
 * pVar.name = "Carolin";
 * pVar.age = 34;
 * pVar.heigth = 67.5f;
 * pVar.weight = 5.6f;
 * pVar.salary = 80000.78;
 * 
 * 
 ** NOTE ----------------------------------------------------------------------------------------
 *
 *  person person2 = { "Manolito", 14, 173, 53, 1000, { "Moto", "snapDragon", 4500, 14, 2, 15 } };
 *  person person3 = person2;
 * 
 *  no se pasa por referencia, se crea otra variable con los mismos valores
 */
#include <iostream>
using namespace std;


struct phone {
    string name;
    string processor;
    float price;
    int camera;
    int RAM;
    int ROM;
};
struct person{
    string name;
    int age;
    float heigth;
    float weight;
    double salary;
    phone telefono;
}; // -----> se termina como una instrucción, por lo que se termina con ;

int main(){
    person pVar;

    // Defination of propertys
    pVar.name = "Carolin";
    pVar.age = 34;
    pVar.heigth = 67.5f;
    pVar.weight = 5.6f;
    pVar.salary = 80000.78;

    //! cout << endl << " " << pVar ; this is a error

    // struct inside another struct
    pVar.telefono.name = "Moto";
    pVar.telefono.processor  = "SnapDragon";
    pVar.telefono.price = 4500;
    pVar.telefono.camera = 14;
    pVar.telefono.RAM = 2;
    pVar.telefono.ROM = 15;


    //* Structure Initialization 
    person person2 = { "Manolito", 14, 173, 53, 1000, { "Moto", "snapDragon", 4500, 14, 2, 15 } };
    person person3 = person2;

    cout << person3.name << endl;
    person3.name = "Raul";

    cout << person2.name << endl;
    cout << person3.name;
}
