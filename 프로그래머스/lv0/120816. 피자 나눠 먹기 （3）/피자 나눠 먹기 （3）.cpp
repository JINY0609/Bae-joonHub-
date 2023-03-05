#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0, num=0;
    if(slice>=n)
        answer = 1;
    else
    {
        while(num < n)
            num=(++answer)*slice;
    }
    
    return answer;
}