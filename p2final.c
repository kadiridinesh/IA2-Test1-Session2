#include<stdio.h>
int input_side()
{
  int n;
  printf(" enter a side of the triangle\n");
  scan("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
   return 0;
}
void output(int a ,int b,int c,int is scalene)
{
  if(is scalene =0)
  {
    printf("the triangle with sides %d %d and %d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle wuth sides %d,%d and %d is not scalene\n",a,b,c)
  }
  }
int main()
{
  int a,b,c in scalene
  a =input
}