#include<stdio.h>
int input_number()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;
}
int is_composite(int n)
{
  for(int i =2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
    }
    return 0;
}
void output(int n,int composite)
{
  if(is composite)
    printf("%d is comopsite number\n",n);
  else
    printf("%d is not a composite number\n",n);
}
int main()
{
  
}
