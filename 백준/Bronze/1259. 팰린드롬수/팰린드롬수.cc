#include <bits/stdc++.h>
using namespace std;

string s, rs;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        cin >> s;

        if (s.compare("0") == 0)
            break;

        rs = s;
        reverse(rs.begin(), rs.end());

        if (s == rs)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}