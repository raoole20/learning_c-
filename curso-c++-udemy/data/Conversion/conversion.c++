/**
 ** DataType conversion
 *
 ** Type Conversion
 **     Implicit  
 *        Done by compiler automatically
 **     Explicit 
 *        Done by user intetionally
*/

#include <iostream>
using namespace std;

int main(){
    int var1;
    float var2 = 10.5f;

    var1 = var2; // --> implicit concersion

    cout << "The Value is: " << var1 << endl; // value 10 lost data
    cout << "The Value is: " << var2 << endl; // real value 15.5 


    var1 = static_cast<int>(var2); // --> explicit conversion
//? var1 = static_cast<typetoConvert>(namevariable); --> how to make an explicit conversion

    cout << "The Value is: " << var1 << endl; // value 10 lost data
    cout << "The Value is: " << var2 << endl; // real value 15.5 

    return 0;
}