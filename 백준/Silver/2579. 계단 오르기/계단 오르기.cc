#include <bits/stdc++.h>
using namespace std;

int stair_num;
int stair[301];
int a[301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> stair_num;
    for (int i = 1; i <= stair_num; i++)
        cin >> stair[i];

    a[0] = 0;
    a[1] = stair[1];
    a[2] = stair[1] + stair[2];

    for (int j = 3; j <= stair_num; j++)
        a[j] = max(a[j - 2] + stair[j], stair[j - 1] + stair[j] + a[j - 3]);

    cout << a[stair_num] << "\n";
}

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}