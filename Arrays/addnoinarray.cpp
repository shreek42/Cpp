#include <iostream>
using namespace std;
int main()
{
    int A[5], i = 0, n = 5, sum = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Array Element at position " << i << ": ";
        cin >> A[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout << "Sum is: " << sum;
}