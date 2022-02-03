#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter your Name: ";
    cin.getline(s, 20);
    cout << "Welcome " << s;
}
//We can use get it is same as that og getline