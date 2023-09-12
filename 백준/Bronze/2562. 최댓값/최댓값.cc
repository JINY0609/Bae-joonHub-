#include <bits/stdc++.h>
using namespace std;

int num[9];
int pos = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
        if (num[i] > max)
        {
            max = num[i];
            pos = i + 1;
        }
    }

    cout << max << "\n";
    cout << pos << "\n";
}