#include <iostream>
using namespace std;

int main() {

    int sizeOfStart;

    cout << "por favor ingrese el tamaño de la start" << endl;  
    cin >> sizeOfStart;

    for(int i = sizeOfStart; i >= 1; i--){
        for(int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << "\n";
    } 

    return 0;
}