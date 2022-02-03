#include <iostream>
using namespace std;
int LinearSearch(int Arr[10], int m, int key)
{

    for (int i = 0; i < m; i++)
    {
        if (Arr[i] == key)
        {
            return i + 1;
            return 0;
        }
    }
}

int main()
{
    int n, k;
    int a[10];
    cout << "Enter Numbers in an Array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Key: ";
    cin >> k;
    int Position = LinearSearch(a, n, k);
    cout << "Key Found at: " << Position;
}