#include <iostream>

using namespace std;

int main()
{
    int year = 0;

    cout << "Enter the year you want to check for leap year:\n";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year", year;
            }
            else
            {
                cout << year << " is not a leap year", year;
            }
        }
        else
        {
            cout << year << " is a leap year", year;
        }
    }
    else
    {
        cout << year << " is not a leap year", year;
    }

    return 0;
}
