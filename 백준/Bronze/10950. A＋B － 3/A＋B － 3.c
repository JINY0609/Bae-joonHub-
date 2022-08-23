#include <stdio.h>
int main()
{
int test;
int A,B;
int solution[1000]={0};
scanf("%d",&test);

for(int i=0; i<test; i++)
{
scanf("%d %d",&A,&B);
solution[i] = A+B;
}

for(int i=0; i<test; i++)
printf("%d\n",solution[i]);

return 0;
}