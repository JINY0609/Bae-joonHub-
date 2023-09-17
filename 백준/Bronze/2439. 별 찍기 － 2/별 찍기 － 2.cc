#include <bits/stdc++.h>
using namespace std;

int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}