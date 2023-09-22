#include <bits/stdc++.h>
using namespace std;

int k, sumNum, num;
vector<int> sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num != 0)
            sum.push_back(num);
        else
            sum.pop_back();
    }

    for (int j : sum)
        sumNum += j;

    cout << sumNum << '\n';
}