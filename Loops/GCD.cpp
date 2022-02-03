#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers: " << endl;
    cin >> num1 >> num2;
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        else if (num2 > num1)
            num2 = num2 - num1;
    }
    cout << "GCD is : " << num1;
}