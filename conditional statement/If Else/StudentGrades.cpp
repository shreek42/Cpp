#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s1, s2, s3, s4, s5, total;
    float avg;
    cout << "Enter scores in Marathi, English, Math, Science,History " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0;

    if (avg >= 60)
    {
        cout << "pass hogaya with A grade and " << avg << " percent";
    }
    else if (avg >= 35 && avg < 60)
    {
        cout << "Abe ajun abhyas kr B grade ala ani fakt " << avg << " percent alet";
    }
    else
    {
        cout << "Fail zala bhai tu";
    }
}