#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int nn = sqrt(n);
    for(int i=1; i<=nn; i++)
    {
        if (i*i == n)
            answer+=1;
        else if(n%i == 0)
            answer+=2;
    }
    return answer;
}