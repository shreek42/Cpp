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
    complex operator+(complex com)
    {
        complex temp;
        temp.real = real + com.real;
        temp.img = img + com.img;
        return temp;
    }
    complex operator-(complex co)
    {
        complex temporary;
        temporary.real = real - co.real;
        temporary.img = img - co.img;
        return temporary;
    }
    void display()
    {
        cout << real << " + "
             << "(" << img << ")"
             << "i" << endl;
    }
};

int main()
{
    complex c1(4, 5);
    complex c2(4, 5);
    complex c3, c4;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.display();
    c4.display();
}
