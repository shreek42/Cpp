#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, k;
    cout << "Enter number: ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        k = i * n;
        cout << n << " X " << i << " = " << k << endl;
    }
    return 0;
}