#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, r1, r2, d;
    cout << "Enter a,b,c " << endl;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are real & equal.";
        r1 = (-b / (2 * a));
        cout << "Root(s) are :" << r1;
    }
    else if (d > 0)
    {
        cout << "Roots are real & unequal";
        r1 = ((-b + sqrt(d)) / 4 * a);
        r2 = ((-b - sqrt(d)) / 4 * a);
        cout << "Roots are : " << r1 << "and" << r2;
    }
    else
    {
        cout << "Roots are imaginary.";
    }
    return 0;
}
