// more than one function with same name
#include <iostream>
using namespace std;
int min(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
        return x;
}
int min(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if (y < z)
    {
        return y;
    }
    else
        return z;
}
int main()
{
    int a = 10, b = 20, c = 5, d;
    cout << min(a, b) << endl
         << min(a, b, c) << endl;
}