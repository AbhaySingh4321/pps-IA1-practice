#include <stdio.h>
int input_n()
{
  int a;
  printf("enter a number:\n");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum;
  sum=n*(n+1)/2;
  return sum;
}
void output(int sum)
{
  printf("Sum of natural number is:%d",sum);
}
int main()
{
  int n=input_n();
  int sum=sum_n(n);
  output(sum);
  return 0;
}