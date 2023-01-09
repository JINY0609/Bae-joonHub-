#include <iostream>
using namespace std;

int main(void){
    int m,n;
    int dp[10001];
    int sum=0;
    int small=10000;
    
    cin>>m;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        dp[i]=i*i;
    }
    
    for(int j=1; j<=n; j++)
    {
        if(m<=dp[j]&&dp[j]<=n)
        {
            small = min(small, dp[j]); //최솟값 비교 
            sum+=dp[j];//값 더해줌
        }
    }
    
    if(sum != 0)
    {
        cout<<sum<<"\n"<<small;
    }
    else 
        cout<<-1<<endl;
    
    return 0;
}