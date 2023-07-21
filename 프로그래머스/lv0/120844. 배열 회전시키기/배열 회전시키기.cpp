#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    
    vector<int> answer;
    if(direction == "left")
    {
        for(int i=0; i<numbers.size()-1; i++)
            answer.push_back(numbers.at(i+1));
        answer.push_back(numbers.at(0));
    }
    else if(direction == "right")
    {
        answer.push_back(numbers.back());
        for(int i=1; i<numbers.size(); i++)
            answer.push_back(numbers.at(i-1));   
    }
        
    return answer;
}