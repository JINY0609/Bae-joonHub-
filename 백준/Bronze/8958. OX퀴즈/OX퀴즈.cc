#include <bits/stdc++.h>
using namespace std;

string quiz;
int count_quiz, weight, test;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> test;
    for (int k = 0; k < test; k++)
    {
        weight = 1;
        count_quiz = 0;

        cin >> quiz;
        for (int i = 0; i < quiz.length(); i++)
        {
            if (quiz[i] == 'O')
            {
                count_quiz += weight;
                weight++;
            }
            else if (quiz[i] == 'X' && weight != 0)
                weight = 1;
        }
        cout << count_quiz << "\n";
    }
}