#include <iostream>
using namespace std;

int main()
{
    int vIn;

    cout << "Por favor ingrese un numero: " << endl;    
    cin >> vIn;

    if( vIn % 2 == 0 ){
        cout << "\n" << vIn << " is Even";
        return 0;
    }

    cout << "\n" << vIn << " is Odd";
    return 0; 
}