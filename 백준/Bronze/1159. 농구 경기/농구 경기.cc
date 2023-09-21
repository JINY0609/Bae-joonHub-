#include <bits/stdc++.h>
using namespace std;

int albphatbet[26];
string s;
int num, countNum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> num;

    for (int j = 0; j < num; j++)
    {
        cin >> s;
        albphatbet[s[0] - 'a']++;

        if (albphatbet[s[0] - 'a'] >= 5)
            countNum++;
    }

    for (int i = 0; i < 26; i++)
    {

        if (albphatbet[i] >= 5)
            cout << char(i + 'a');
    }

    if (countNum == 0)
        cout << "PREDAJA" << '\n';

    return 0;
}