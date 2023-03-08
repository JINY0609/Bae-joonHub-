#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0, tmp=0;
    
    //버블정렬 
    for(int i=array.size()-1; i>0; i--) 
    {
        for(int j=0; j<i; j++ )
        {
           if(array[j]<array[j+1])
           {
               tmp=array[j];
               array[j]=array[j+1];
               array[j+1]=tmp;
           }
        }
    }
    answer = array[array.size()/2];
    return answer;
}