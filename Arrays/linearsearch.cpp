#include <iostream>
using namespace std;
int main()
{
    int key, A[10], n = 10, i;

    cout << "Enter Elements in an Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Key: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << "Found at " << i;
            return 0;
        }
    }
    cout << "Not Found";
}