#include <bits/stdc++.h>
using namespace std;

vector<int> n;
int num;
int tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        n.push_back(tmp);
    }

    sort(n.begin(), n.end());

    cout << n.at(0) << " " << n.at(num - 1) << "\n";
}