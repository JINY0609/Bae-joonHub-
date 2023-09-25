#include <bits/stdc++.h>
using namespace std;

int n, score[1000], maxNum = -2100000000;
float average;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];

        if (score[i] > maxNum)
            maxNum = score[i];
    }

    for (int j = 0; j < n; j++)
    {
        average += (score[j] / (float)maxNum) * 100.0;
    }

    cout << (float)(average / n) << '\n';
}