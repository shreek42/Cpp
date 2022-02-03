#include <iostream>
using namespace std;
int main()
{
    string Email;
    cout << "Enter Email: ";
    cin >> Email;
    if (Email.find('@') != string::npos)
    {
        int i = Email.find('@');
        string uname = Email.substr(0, i);
        cout << "Username is: " << uname;
    }
    else
    {
        cout << "Invalid Email";
    }
}