//피보나치 수열 dp는 전부(n!)과 관련되게 생각
#include <stdio.h>
int main()
{
int num;
int dp[1001] = {0};
dp[1] = 1;
dp[2] = 2;

scanf("%d",&num);
for(int i=3; i<=num; i++)
{
dp[i] = (dp[i-1] + dp[i-2])%10007;
}

printf("%d\n", dp[num]);

return 0;
}