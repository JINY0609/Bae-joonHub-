#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0,all_pizza = 0;
    
    while(all_pizza<n)
    {
        all_pizza = 7*(++answer);
    }
    return answer;
}