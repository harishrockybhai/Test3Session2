#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the first num and  den :");
  scanf("%d %d",num1,den1);
   printf("enter the second num and  den :");
  scanf("%d %d",num2,den2);
  
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=num1*den2+num2*den1;
  *den3=den1*den2;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}
