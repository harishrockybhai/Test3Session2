#include<stdio.h>
typedef struct _fraction
{
int num,den;
}Fraction;

int gcd(int a, int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
 int main()
{
  printf("%d",gcd(16,24));
}