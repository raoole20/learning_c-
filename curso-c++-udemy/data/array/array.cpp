#include <iostream>

using namespace std;

int main(){

    // the string will be decarate datatype [size] = { values... }
    string name[3] = { "jhon", "Hana", "Steve" };
    int numbers[5] = { 1,2,4,3,5 };

    int arr[5] = { 0 } ;

    for (int i = 0; i < 5; i ++) {
        cout << endl << "Enter no. " << i << " : ";
        cin >> arr[i];
    }

    int min = arr[0];

    for( int i = 1; i < 5; i++) {
        if( min > arr[i] ){
            min = arr[i];
        }
    }

    cout << endl << "MIn values is : " << min;
    return 0; 
}