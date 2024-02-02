#include<iostream>
using namespace std;
#include "calculate.h"

int main()
{
    int Num1 , Num2;
    char op;
    calculate c;

    cout << "Please Enter Your Operation: ";
    cin >> op;

    while(true)
    {    
        if(op == '+')
        {
            cout << "Please Enter Your First Number: " << endl;
            cin >> Num1;
            cout << "Please Enter Your last Number: " << endl;
            cin >> Num2;
            c.SetNum(Num1 , Num2);
            cout << "This Is The Number After Add: " << c.GetAdd(Num1 , Num2);
            break;
        }
        if(op == '-')
        {
            cout << "Please Enter Your First Number: " << endl;
            cin >> Num1;
            cout << "Please Enter Your last Number: " << endl;
            cin >> Num2;
            c.SetNum(Num1 , Num2);
            cout << "This Is The Number After Subtract: " << c.GetSubtract(Num1,Num2);
            break;

        }
        if(op == '*')
        {
            cout << "Please Enter Your First Number: " << endl;
            cin >> Num1;
            cout << "Please Enter Your last Number: " << endl;
            cin >> Num2;
            c.SetNum(Num1 , Num2);
            cout << "This Is The Number After Multiple: " << c.GetMultiple(Num1 , Num2);
            break;
        }
        if(op == '/')
        {
            cout << "Please Enter Your First Number: " << endl;
            cin >> Num1;
            cout << "Please Enter Your last Number: " << endl;
            cin >> Num2;
            c.SetNum(Num1 , Num2);
            if(Num2 == 0)
            {
                cout << "Huge Number" << endl;
                break;
            }
            cout << "This Is The Number After Divide: " << c.GetDivide(Num1 , Num2);
            break;
        }
        else
        {
            cout << "Please Choose This Right Operation: " << endl;
            cin >> op;
        }
    }
}