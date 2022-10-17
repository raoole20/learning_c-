#include <iostream>
using namespace std;

int main(){
    string firstName = "Dino";
    string lastName = "Brown";
    string fullName = firstName + lastName; 

    string appendFullName = firstName.append(lastName);
    cout << fullName << " other way concatenation " + appendFullName +  " \n" ;


// length of string
    cout << firstName.length() << endl;
    cout << firstName.size() << endl;

    return 0;
}