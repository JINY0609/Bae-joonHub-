#include <bits/stdc++.h>
using namespace std;

int hour, minute;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> hour >> minute;

    if (minute >= 45)
        minute -= 45;
    else
    {
        if (hour == 0)
        {
            hour = 23;
            minute = 60 - (45 - minute);
        }
        else
        {
            hour -= 1;
            minute = 60 - (45 - minute);
        }
    }

    cout << hour << " " << minute << "\n";
}