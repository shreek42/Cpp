#include <iostream>
using namespace std;
class rational
{
private:
    int num;
    int den;

public:
    rational()
    {
        num = 1;
        den = 1;
    }
    rational(int n, int d)
    {
        num = n;
        den = d;
    }
    rational(rational &ra)
    {
        num = ra.num;
        den = ra.den;
    }
    int setNum(int n);
    int setDen(int d);
    int getNum() { return num; }
    int getDen() { return den; }

    friend rational operator+(rational r1, rational r2);
    friend ostream &operator<<(ostream &co, rational &r)
    {
        co << r.num << "/" << r.den;
        return co;
    }
};
int rational::setNum(int n)
{
    num = n;
}
int rational::setDen(int d)
{
    den = d;
}
rational operator+(rational r1, rational r2)
{
    rational temp;
    temp.num = r1.num * r2.den + r1.den * r2.num;
    temp.den = r1.den * r2.den;
    return temp;
}
int main()
{
    int n1, d1, n2, d2;
    rational rat(4, 4);
    rational r1(4, 4);
    /*cout << "Enter Numerator of 1st Rational Number: " << endl;
    cin >> n1;
    cout << "Enter Denominator of 1st Rational Number: " << endl;
    cin >> d1;
    cout << "Enter Numerator of 2d Rational Number: " << endl;
    cin >> n2;
    cout << "Enter Denominator of 2nd Rational Number: " << endl;
    cin >> d2;*/
    cout << rat << endl;
    rational r3;
    r3 = r1 + rat;
    cout << r3 << endl;
}
