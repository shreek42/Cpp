#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    int A[10][10];
    int B[10][10];
    int C[10][10];
    cout << "Enter No. of Rows: ";
    cin >> m;
    cout << "Enter No. of Columns: ";
    cin >> n;
    cout << "Enter Elemrnts in 1st Matrix: " << endl;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << "Enter Element A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
    }
    cout << "Enter Elemrnts in 2nd Matrix: " << endl;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << "Enter Element B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl
         << "Output Matrix: " << endl;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}