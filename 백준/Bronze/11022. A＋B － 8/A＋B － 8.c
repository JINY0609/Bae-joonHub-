#include <stdio.h>
int main(){
int test =0;
int A,B;
scanf("%d" ,&test);

for(int i=1 ;i<=test; i++)
  {
    scanf("%d %d",&A, &B);
    printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
    }
return 0;
}