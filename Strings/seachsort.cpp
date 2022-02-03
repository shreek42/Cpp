#include <iostream>
#include <String.h>
#include <iomanip>
using namespace std;
class Sort
{
public:
    void swapS(string *a, string *b)
    {
        string s1 = *a, s2 = *b;
        *a = s2;
        *b = s1;
    }

public:
    void swapI(int *a, int *b)
    {
        int s1 = *a, s2 = *b;
        *a = s2;
        *b = s1;
    }

public:
    void swapF(float *a, float *b)
    {
        float s1 = *a, s2 = *b;
        *a = s2;
        *b = s1;
    }

public:
    void Quick(float arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);

            Quick(arr, low, pi - 1);
            Quick(arr, pi + 1, high);
        }
    }

public:
    int partition(float arr[], int low, int high)
    {

        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {

            if (arr[j] < pivot)
            {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }

public:
    void swap(float arr[], int i, int j)
    {
        swapF(&arr[i], &arr[j]);
    }
};
class StudentD : public Sort
{
    struct stud
    {
        int roll;
        string name;
        float sgpa;
    };

    struct stud sd[15];

public:
    void Quick(float arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);

            Quick(arr, low, pi - 1);
            Quick(arr, pi + 1, high);
        }
    }

public:
    int partition(float arr[], int low, int high)
    {

        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {

            if (arr[j] > pivot)
            {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }

public:
    void swap(float arr[], int i, int j)
    {
        swapF(&arr[i], &arr[j]);
        swapI(&sd[i].roll, &sd[j].roll);
        swapF(&sd[i].sgpa, &sd[j].sgpa);
        swapS(&sd[i].name, &sd[j].name);
    }

public:
    void Data()
    {
        cout << "Enter student data as Name,Roll Number,SGPA" << endl;
        for (int i = 0; i < 15; i++)
        {
            cin >> sd[i].name >> sd[i].roll >> sd[i].sgpa;
        }
    }

public:
    void RollCall()
    {
        int n = 15;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (sd[j].roll > sd[j + 1].roll)
                {
                    swapI(&sd[j].roll, &sd[j + 1].roll);
                    swapS(&sd[j].name, &sd[j + 1].name);
                    swapF(&sd[j].sgpa, &sd[j + 1].sgpa);
                }
            }
        }
    }

public:
    void Alphabetic()
    {
        int n = 15, i, j;
        string key = "";
        for (i = 1; i < n; i++)
        {
            key = sd[i].name;
            j = i - 1;
            while (j >= 0 && sd[j].name.compare(key) > 0)
            {
                sd[j + 1].name = sd[j].name;
                j = j - 1;
            }
            sd[j + 1].name = key;
        }
    }

public:
    void Topper()
    {
        int n = 15;
        float arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = sd[i].sgpa;
        }
        Quick(arr, 0, n - 1);
        cout << "Sr.No.     "
             << "Name          "
             << "Roll Number       "
             << "SGPA      \n";
        for (int i = 0; i < 10; i++)
        {
            cout << (i + 1) << ":"
                 << " " << setw(14) << sd[i].name << " " << setw(12) << sd[i].roll << " " << setw(12) << sd[i].sgpa << endl;
        }
    }

public:
    void Searchsgpa(float sgpa)
    {
        int n = 15;
        for (int i = 0; i < n; i++)
        {
            if (sgpa == sd[i].sgpa)
            {
                cout << "Name= " << sd[i].name << " RollNumber= " << sd[i].roll << " SGPA= " << sd[i].sgpa << endl;
            }
        }
    }

public:
    void Searchname(string name)
    {
        int n = 15;
        int l = 0, r = n - 1, index = -1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;

            if (sd[m].name.compare(name) == 0)
            {
                index = m;
                cout << "Sr.No.     "
                     << "Name          "
                     << "Roll Number       "
                     << "SGPA      \n";
                cout << (index + 1) << ":"
                     << " " << setw(14) << sd[index].name << " " << setw(12) << sd[index].roll << " " << setw(12) << sd[index].sgpa << endl;
            }
            if (sd[m].name.compare(name) > 0)
                l = m + 1;

            else
                r = m - 1;
        }
        if (index == -1)
            cout << "No results found";
    }

public:
    void Display()
    {
        int num = 15;
        cout << "Sr.No.     "
             << "Name          "
             << "Roll Number       "
             << "SGPA      \n";
        for (int i = 0; i < num; i++)
        {
            cout << (i + 1) << ":"
                 << " " << setw(14) << sd[i].name << " " << setw(12) << sd[i].roll << " " << setw(12) << sd[i].sgpa << endl;
        }
    }
};

int main()
{
    int n;
    StudentD stu;
    stu.Data();
    while (n != 6)
    {
        cout << "\n\nSelect a method \n1:Roll numbers in ascending order\n2:Students name Alphabetically";
        cout << "\n3:Toppers' list\n4:Search student according to sgpa\n5:Search student according to name\n6:Exit\n";
        cin >> n;
        switch (n)
        {
        case 1:
            stu.RollCall();
            stu.Display();
            break;
        case 2:
            stu.Alphabetic();
            stu.Display();
            break;
        case 3:
            stu.Topper();
            //	stu.Display();
            break;
        case 4:
            float sgpa;
            cout << "Enter the SGPA= ";
            cin >> sgpa;
            stu.Searchsgpa(sgpa);
            break;
        case 5:
            string name;
            cout << "Enter the name= ";
            cin >> name;
            stu.Searchname(name);
            break;
        }
    }
}