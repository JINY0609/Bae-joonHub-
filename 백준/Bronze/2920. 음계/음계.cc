#include <bits/stdc++.h>
using namespace std;

vector<int> music;
vector<int> R{1, 2, 3, 4, 5, 6, 7, 8};
vector<int> L{8, 7, 6, 5, 4, 3, 2, 1};
int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 8; i++)
    {
        cin >> num;
        music.push_back(num);
    }

    if (R == music)
        cout << "ascending" << '\n';
    else if (L == music)
        cout << "descending" << '\n';
    else
        cout << "mixed" << '\n';
}