#include <iostream>
using namespace std;

void fun()
{
    static int a = 0;
    a++;
    int b = 5;
    cout << a << " " << b << endl;
}
int main()
{
    fun();
    fun();
}