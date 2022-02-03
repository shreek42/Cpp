//iterator is used to access all the elements of the string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "shreekar";
    string ::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        *it = *it - 32;
    }
    cout << s << endl;

    string s1 = "Rajasee";
    string ::reverse_iterator ite;
    for (ite = s1.rbegin(); ite != s1.rend(); ite++)
    {
        cout << *ite;
    }
    cout << endl;

    //to find length of string
    string s2;
    cout << "Enter String: ";
    getline(cin, s2);
    int count = 0;
    for (int i = 0; s2[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length is " << count << endl;
}