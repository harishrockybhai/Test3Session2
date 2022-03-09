#include<stdio.h>
typedef struct _fraction
{
int num,den;
}Fraction;

Fraction input_fraction()
{
  Fraction a;
  printf("enter the numbers of num and den :");
  scanf("%d %d",&a.num,&a.den);
  return a;
}
Fraction largest_fraction(Fraction f1,Fraction f2, Fraction f3)
{
  float a=f1.num/f1.den;
  float b=f2.num/f2.den;
  float c=f3.num/f3.den;
  if(a<b && a<c)
    return f1;
  else if(b<c)
    return f2;
  else
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3,        
 Fraction largest)
{
    largest = largest_fraction(f1,f2,f3);
  printf("the smallest of three fractions is %d/%d",largest.num,largest.den);
}
int main()
{
  Fraction f1, f2, f3, large;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  output(f1,f2,f3,large);
}
