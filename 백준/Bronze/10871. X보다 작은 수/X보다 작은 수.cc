#include <bits/stdc++.h>
using namespace std;

int n[10000];
int avg, num;

int main()
{
    cin >> num >> avg;
    for (int i = 0; i < num; i++)
    {
        cin >> n[i];
        if (n[i] < avg)
            cout << n[i] << " ";
    }
}