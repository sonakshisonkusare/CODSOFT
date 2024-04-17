// Simple calculator
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, result;
    char Operator;
    cout << "Enter the two numbers: " << endl;
    cin >> n1 >> n2;
    cout << "Enter the Operator: " << endl;
    cin >> Operator;
    switch (Operator)
    {
    case '+':
     result = n1 + n2;
        break;

        case '-' :
         result = n1 - n2;
        break;

        case '*' :
        result = n1 * n2;
        break;

        case '/' :
         if (n2 != 0) {
            result = n1 / n2;
        } else {
            cout << "Error caught";
            return 1;
        }

    default:
        cout << "Invalid Operator" << endl;
        return 1;
        break;
    }
    cout << "Result"<< " " <<"="<< " "<< result;
    return 0;
}