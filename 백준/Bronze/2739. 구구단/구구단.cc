#include <bits/stdc++.h>
using namespace std;

int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 1; i <= 9; i++)
    {
        cout << num << " "
             << "*"
             << " " << i << " "
             << "="
             << " " << num * i;
        cout << "\n";
    }
}