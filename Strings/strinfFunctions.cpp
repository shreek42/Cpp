#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[] = "Good";
    char s2[] = "Morning";

    //To find length of string
    cout << strlen(s1) << endl;

    //string concatenation
    strcat(s1, s2);
    cout << s1 << endl;

    //version of string concatination
    char s3[] = "Shreekar";
    char s4[] = "Kullarni";
    strncat(s3, s4, 5);
    cout << s3 << endl;

    //string copy
    char s5[] = "";
    char s6[] = "JayJd";
    strcpy(s5, s6);
    cout << s6 << endl;
    //strncpy is same as that of strncat but works as strcpy

    //Occurance of substring inside main string
    char s7[] = "Programmer";
    char s8[] = "gram";
    cout << strstr(s7, s8) << endl;
    //compairing two strings
    cout << strcmp(s7, s8) << endl;

    //Occurance of character inside string
    //from left side
    cout << strchr(s7, 'm') << endl;
    //from right side
    cout << strrchr(s7, 'm') << endl;

    //string to long integer
    char s9[] = "10";
    strtol(s9, NULL, 10);
    cout << s9;
}