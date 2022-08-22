#include <stdio.h>
int main() 
{
  int x, y, w, h;
  int minw =0, minh=0;
  scanf("%d %d %d %d",&x,&y,&w,&h);

  //x축 최단거리 파악
if((double)w/2>x)
  minw = x;
else
  minw= w-x;

  //y축 최단거리 파악
if((double)h/2>y)
  minh = y;
else
  minh = h-y;

  //구한 두개의 최단거리 비교
if(minh<minw)
  printf("%d\n",minh);
else
  printf("%d\n",minw);

return 0;
}