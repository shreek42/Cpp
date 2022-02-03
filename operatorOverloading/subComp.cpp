#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend complex operator-(complex c1, complex c2);

    friend ostream &operator<<(ostream &o, complex c);
};

complex operator-(complex c1, complex c2)
{
    complex t;
    t.real = c1.real - c2.real;
    t.img = c1.img - c2.img;
    return t;
}
ostream &operator<<(ostream &o, complex c)
{
    o << c.real << "+i" << c.img;
    return o;
}
int main()
{
    complex c1(4, 10), c2(4, 8), c3;
    c3 = c1 - c2;
    cout << c3 << endl;
    operator<<(cout, c1);
}
