#include <iostream>
using namespace std;
int main()
{
    int A[5], min = INT_MAX, n = 5, i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Array Elemrnt: ";
        cin >> A[i];
    }
    A[0] = min;
    for (int x : A)
    {
        if (x < min)
        {
            min = x;
        }
    }
    cout << "Minimum is: " << min;
    return 0;
}