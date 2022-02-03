#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three Numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "Sabse bada hai " << a;
    }
    else
    {
        if (b > c)
        {
            cout << "Sabse bada hai " << b;
        }
        else
        {
            cout << "Sabse bada hai " << c;
        }
    }
    return 0;
}