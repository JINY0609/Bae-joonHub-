#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 26; i++)
        a[i] = -1;

    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (a[s[i] - 'a'] == -1)
            a[s[i] - 'a'] = i;
    }

    for (int i : a)
        cout << i << " ";
}