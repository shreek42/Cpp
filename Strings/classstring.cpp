#include <iostream>

using namespace std;
int main()
{
    string str = "Shreekar";
    //To find length
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    str.resize(90);
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    str.clear();
    cout << str.size() << endl;

    string s = "Kulkarni";
    //to add content at end
    s.append("Shree");
    cout << s << endl;
    //to add content at given position
    s.insert(4, "M");
    cout << s << endl;
    //to replace content
    s.replace(3, 4, "Shree");
    cout << s << endl;
    string s1 = "Kulkarni'";

    //To add a single letter at end
    s1.push_back('s');
    cout << s1 << endl;
    //to delete last letter from string (backspace)
    s1.pop_back();
    cout << s1 << endl;
    string a = "Shreekar";
    string b = "Shrikar";
    //to swap strings exchange values
    a.swap(b);
    cout << a << endl
         << b << endl;

    //to copy string in character array
    string cpy = "Rajasee";
    char c[10];
    cpy.copy(c, 3);
    c[3] = '\0';
    cout << c << endl;

    string f = "Myself Shreekar";
    //to find string position
    cout << f.find("Shree") << endl;
    cout << f.rfind("lf") << endl;
    cout << f.find_first_of('e') << endl;
    cout << f.find_last_of('e', 3) << endl;
}