#include <iostream>
using namespace std;

template <class T>
T maxim(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}
template <class M>
M add(M x, M y)
{
    return x + y;
}
int main()
{
    int a = 12, b = 13;
    float c = 9.6f, d = 7.5f;
    cout << maxim(a, b) << endl
         << maxim(c, d) << endl
         << add(c, d) << endl
         << add(a, b) << endl;
    return 0;
}