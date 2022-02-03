#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float avg, A[100], sum = 0.0;
    cout << "Enter No. of elements: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter Number: ";
        cin >> A[i];
        sum += A[i];
    }
    avg = sum / n;
    cout << "Average: " << avg;
    return 0;
}