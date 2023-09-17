#include <bits/stdc++.h>
using namespace std;

int n, c;
int a[42];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (a[n % 42] == 0)
            c++;

        a[n % 42]++;
    }
    cout << c << "\n";
}