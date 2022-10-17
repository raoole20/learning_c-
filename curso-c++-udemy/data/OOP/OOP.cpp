/***
 *? Object Oriented Programming
 *
 **  How to define a new object
 *   nameObject nameVariable
 *  
 **   How to set public or pivate variables
 *    frist of all, use the reserved word private or public, before the variable definition
 * 
 *? key Note---------------------------------------------------------------------------------
 ** Access specifiers
 *      private:
 *      Only the self class can access
 * 
 *      protected:
 *      only the self class and him child class
 * 
 *      public
 *      all can access 
 */

#include <iostream>
using namespace std;


// class
class house {
private:
    int length  = 0, breadth = 0;

public:
    void setData (int x, int y) {
        length = x;
        breadth = y;
    }

    void area(){
        cout << "Area of house " << length * breadth;
    }
};

int main(){
    house gini;
    gini.setData(300, 500);
    return 0;
}