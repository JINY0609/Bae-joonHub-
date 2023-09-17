#include <bits/stdc++.h>
using namespace std;

int year;
int leap_year;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
            leap_year = 1;
        else if (year % 400 == 0)
            leap_year = 1;
    }

    cout << leap_year << "\n";
}