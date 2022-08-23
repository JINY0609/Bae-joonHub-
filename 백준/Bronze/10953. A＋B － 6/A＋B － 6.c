#include <stdio.h>
int main()
{
int A,B;
char p;
int test=0;

scanf("%d", &test);
for(int i=0; i<test; i++)
{
scanf("%d %c %d",&A, &p, &B);
printf("%d\n", A+B);
}
return 0;
 
}