#include <iostream>
using namespace std;
int main()
{
    int i, n, sum, prime;
    cout << "Enter number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            sum += i;
            prime = sum + 1;
        }
    }
    // cout << sum;
    if (prime == n + 1)
    {
        cout << n << " is Prime Number.";
    }
    else
    {
        cout << n << "is Not Prime Number.";
    }
}