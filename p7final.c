#include<stdio.h>
typedef struct _fraction
{
int num,den;
}Fraction;

int find_gcd(int a, int b)
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
Fraction input_fraction()
{
  Fraction a;
  pritnf("enter the no of num and den :");
  scanf("%d %d",&a.num,&a.den);
  return a;
  }
Fraction add_fraction(Fraction f1, Fraction f2)
{ 
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den* f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
  }
void output(Fraction f1, Fraction f2,Fraction sum)
{
     sum=add_fractions(a,b);
  
}





















}