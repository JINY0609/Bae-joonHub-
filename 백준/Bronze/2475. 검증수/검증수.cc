#include <bits/stdc++.h>
using namespace std;

int num, sum, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        sum += num * num;
    }

    result = sum % 10;

    cout << result << "\n";
}