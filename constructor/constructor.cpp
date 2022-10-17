#include<iostream>
#include<string>

using namespace std;

class ExampleClass {
private: 
    int age;
public: 
    ExampleClass( int x = 0 ){ // the constructor function will be same name the clase
        age = x;
    }

    int getData(){
        return age;
    }
};


class Person{
private: 
    int age;
    string name;
public: 
    Person(int age, string name){
        this->age  = age;
        this->name = name;
    }

    Person(Person &obj){
        this->age  = obj.age;
        this->name = obj.name;
    }

    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }

    void saludar();
};

void Person::saludar(){
    cout << "Hola me llamo " << this->name;
}

int main(){ 

    ExampleClass obj_1( 14 );
    cout << obj_1.getData();

    system("pause");
    string name;
    int edad;

    cout << "Ingresa Tu nombre de usuario" << endl;
    cin >> name;

    cout << "Ingresa Tu edad" << endl;
    cin >> edad;

    Person person_1(edad, name);

    cout << "Hola " << person_1.getName() << " , espero que estes muy bien ya que tu edad es: ";
    cout << "" << person_1.getAge() << endl;

    system("pause");

    person_1.saludar();
    Person person_2(person_1);

    cout << "Hola (copia de persona 1)" << person_1.getName() << " , espero que estes muy bien ya que tu edad es: ";
    cout << "" << person_1.getAge() << endl;

    system("pause");

    return 0;
}