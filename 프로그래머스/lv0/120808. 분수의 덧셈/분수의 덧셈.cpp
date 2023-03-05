#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int b1=0, b2=0, n=0;
    
    b1 = numer1*denom2;
    b2 = numer2*denom1;
    
    numer1 = b1+b2;
    denom1 = denom1*denom2; //각 수를 곱해줌
    
    n = gcd(numer1, denom1); //유클리드 호제법으로 최대공약수 구함
    
    answer.push_back(numer1/n);
    answer.push_back(denom1/n);
    
    return answer;
}