#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char repeat_calculation = 'y';

    while (repeat_calculation == 'y' || repeat_calculation == 'Y'){

    cout << "enter the first number :" << endl;
    cin >> num1;
    cout << "enter the second :" << endl;
    cin >> num2;

    cout << "(" << num1 << "+" << num2 << ")^2" << endl;
    cout << num1 << "^2+2*" << num1 << "*" << num2 << "+" << num2 << "^2" << endl;
    cout << num1 * num1 << "+" << 2* num1 * num2 << "+" << num2 * num2 << endl;
    cout << num1 * num1 + 2 * num1 * num2 + num2 * num2 << endl;
    cout << "calculate again y/n" << endl;
    cin >> repeat_calculation;
    }
    return 0;
}
