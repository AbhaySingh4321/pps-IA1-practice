#include <stdio.h>
int input()
{
  int a;
  printf("enter a numbers:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if((a>b)&&(a>c))
  {
    return a;
  }
  else if (b>c)
  {
    return b;
  }
  else 
  {
    return c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("the greatest among %d,%d,%d three is %d",a,b,c,largest);
}
int main()
{
  int x, y, z, largest;
  x=input();
  y=input();
  z=input();
  largest=cmp(x,y,z);
  output(x,y,z,largest);
  return 0;
}
