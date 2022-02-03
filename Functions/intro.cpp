#include <iostream>
using namespace std;
float add(float x, float y)
{
    int z;
    z = x + y;
    return z;
}
int maxim(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
        return z;
}
int pow(int x, int y)
{
    int a = 1;
    for (int i = 0; i < y; i++)
    {
        a = a * x;
    }
    return a;
}

int main()
{
    float a = 10.8, b = 10.2, c;
    c = add(a, b);
    cout << "Addition is " << c << endl;

    /*int g, r, t, d;
    cout << "Enter 3 Numbers" << endl;
    cin >> g >> r >> t;
    d = maxim(g, r, t);
    cout << "Maximum is :" << d << endl;*/

    cout << pow(2, 5);
}
