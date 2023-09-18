#include <bits/stdc++.h>
using namespace std;
string s, ss;
int alphabet[26];
int maxNum;
char a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ss += toupper(s[i]);
        alphabet[ss[i] - 'A']++;
    }

    for (int j = 0; j < 26; j++)
    {
        if (maxNum < alphabet[j])
        {
            maxNum = alphabet[j];
            a = j + 'A';
        }
        else if (maxNum == alphabet[j])
            a = '?';
    }

    cout << a << "\n";

    return 0;
}