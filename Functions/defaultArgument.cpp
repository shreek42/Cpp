#include <iostream>
using namespace std;

int max(int x, int y = 0, int z = 0)
{
    return x > y && x > z ? x : y > z ? y
                                      : z;
}
int main()
{
    cout << max(12) << endl;
    cout << max(12, 13) << endl;
    cout << max(12, 13, 14) << endl;
}