#include<iostream>
using namespace std;
int main()
{
    char ch;
    double a,b;
        cout << "1.Addition(press +)" << endl;
        cout << "2.Subtraction(press -)" << endl;
        cout << "3.Multiplication(press *)" << endl;
        cout << "4.Division(press /)" << endl;
        cout << "5.Modulus(press %)" << endl;
        cout << "Enter your choice :" << endl;
        cin >> ch;

    cout << "Enter the first value:" << endl;
    cin >> a;
    cout << "Enter the second value:" << endl;
    cin >> b;
        switch(ch)
        {
            case '+':
            {
            double add=a+b;
            cout << "Addition of a and b is:" << add << endl;
            break;
            }
            case '-':
            {
            double sub=a-b;
            cout << "Subtraction of a and b is:" << sub << endl;
            break;
            }
            case '*':
            {
            double mul=a*b;
            cout << "Multiplication of a and b is:" << mul << endl;
            break;
            }
            case '/':
            if( b != 0)
            {
            double divi=a/b;
            cout << "Division of a and b is:" << divi << endl;
            }
            else
            {
                cout << "Division by zero is not allowed." << endl;
            }
            break;
            default:
            cout << "Enter the valid operation" << endl;
            break;
        }
    }
