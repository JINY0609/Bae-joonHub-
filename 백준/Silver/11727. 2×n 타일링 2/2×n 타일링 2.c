#include <stdio.h>

int main() {

  int c[1001] = {0};
  c[0] = 1;
  c[1] = 1;
  
  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) {
    c[i] = (c[i-1]+c[i-2]*2)%10007;
  }

  printf("%d\n", c[n]);

  return 0;
}