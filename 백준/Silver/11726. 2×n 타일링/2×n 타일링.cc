#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n, result;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    a[0] = 1;
    a[1] = 1;

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        a[i + 2] = (a[i] + a[i + 1]) % 10007;
    }
    cout << a[n] << "\n";
}