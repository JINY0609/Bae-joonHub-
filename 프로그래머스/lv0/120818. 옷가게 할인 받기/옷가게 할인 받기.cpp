#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(price>=100000 && price<=299999)
        answer=price-(price*0.05);
    else if(price>=300000 && price<=499999)
        answer=price-(price*0.1);
    else if(price>=500000)
        answer=price-(price*0.2);
    else
        answer = price;
    
    return answer;
}