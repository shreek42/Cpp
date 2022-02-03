#include <iostream>
using namespace std;
int main()
{
    int A[5], n = 5, max, i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Array Elament at Position " << i << " : ";
        cin >> A[i];
    }
    A[0] = max;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "The Maximum element is " << max;
    return 0;
}
