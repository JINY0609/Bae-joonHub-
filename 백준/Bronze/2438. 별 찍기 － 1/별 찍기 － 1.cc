#include <bits/stdc++.h>
using namespace std;

int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << "*";

        cout << "\n";
    }
}