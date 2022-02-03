#include <iostream>
using namespace std;
int main()
{
    string s = "SHREEKAR KULKArni";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s << endl;

    /*string k[50];
    cout << "Enter String: " << endl;
    getline(cin, k);
    for (int i = 0; k[i] != '\0'; i++)
    {
        if (k[i] >= 97 && k[i] <= 122)
        {
            k[i] = k[i] - 32;
        }
    }
    cout << k << endl;*/
    string w;
    int vowel = 0, consonent = 0, word = 1;
    cout << "Enter String: ";
    getline(cin, w);
    for (int i = 0; w[i] != '\0'; i++)
    {
        if (w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U' ||
            w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
        {
            vowel++;
        }
        else if (w[i] == ' ')
        {
            word++;
        }
        else
            consonent++;
    }
    cout << "No. of Vowels: " << vowel << endl
         << "No. of Consonents: " << consonent << endl
         << "No. of Words: " << word << endl;

    return 0;
}