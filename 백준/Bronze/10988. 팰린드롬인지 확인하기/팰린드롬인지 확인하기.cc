#include <bits/stdc++.h>
using namespace std;

string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;

    for (int i = 0; i < (s.length() / 2); i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            cout << "0" << '\n';
            return 0;
        }
    }

    cout << "1" << '\n';

    return 0;
}