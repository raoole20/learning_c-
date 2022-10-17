/**
 *? Write a program showing ATm functionalities using OOP`s
 *   Check Balance
 *   Cash WithDraw
 *   User Details
 *   Update Mobile No.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class User
{
private:
    // int balance, no_mobile, age, direction, email, no_acount, password;
    double balance;
    int age, no_mobile, no_acount;
    string email, password, direction;

public:
    void constructor(double balance, int age, int no_mobile, int no_acount, string email, string password, string direction)
    {
        this->balance = balance;
        this->age = age;
        this->no_mobile = no_mobile;
        this->no_acount = no_acount;
        this->email = email;
        this->password = password;
        this->direction = direction;
    }

    void checkBalance(string passwordEnterd)
    {
        if (this->password == passwordEnterd)
        {
            cout << "Your balnace is: " << balance << endl;
            return;
        }
        cout << "Error, password invalid";
    }

    void cashWithDraw(string passwordEnterd, double retiro)
    {
        if (password == passwordEnterd)
        {
            balance = balance - retiro;
            cout << "The cash withDraw is succefully"
                 << "Your balance now is: " << balance;
            return;
        }
        cout << "\nError, password invalid";
    }

    void userDetails()
    {
        cout << "You details";
        cout << "\n"
             << this->balance;
        cout << "\n"
             << this->age;
        cout << "\n"
             << this->no_mobile;
        cout << "\n"
             << this->no_acount;
        cout << "\n"
             << this->direction;
        cout << "\n"
             << this->email;
        cout << "\n"
             << this->password;
    }

    void updateNoMobile(int newMobile)
    {
        no_mobile = newMobile;
    }
};

User listUsers[10] = {};

void login(){

}

int main()
{

    int key;
    do
    {
        cout << "\nplis choice one option" << endl;
        cout << "1. create new user" << endl;
        cout << "2. login" << endl;
        cout << "0. logout" << endl;

        cin >> key;

        string passwordenter;
        User newUser;
        double balance;
        int age, no_mobile, no_acount, i;
        string email, password, direction;
        
        switch (key){
        case 1:
            cout << "\nPlis enter your age" << endl;
            cin >> age;

            cout << "\nPlis enter your balance" << endl;
            cin >> balance;

            cout << "\nPlis enter your Num mobile" << endl;
            cin >> no_mobile;

            cout << "\nPlis enter your email" << endl;
            cin >> email;

            cout << "\nPlis enter your password" << endl;
            cin >> password;

            cout << "\nPlis enter your direction" << endl;
            cin >> direction;
        
            no_acount = rand() % 1000;
            newUser.constructor(balance, age, no_mobile, no_acount, email, password, direction);
            listUsers[i] = newUser;
            newUser.userDetails();
            break;
        case 2:
            cout << "\nPlis enter your password and no_acout" << endl;
            cin >> password;

            break;
        case 3:
            newUser.userDetails();
            break;
        case 4:
            cout << "\nPlis enter your password" << endl;
            cin >> password;

            cout << "\nPlis enter your email" << endl;
            cin >> email;
            newUser.updateNoMobile(12345);
            break;

        default:
            break;
        }
    } while (key != 0);

    return 0;
}