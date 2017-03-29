#include<stdio.h>
#include<stdlib.h>


//写一个函数计算当参数为n(n很大)时的值 1-2+3-4+5-6+7......+n

//優化版


long fn(long n);

int main()

{   while(1)

    {


    long  n,k;
    scanf(" %ld",&n);
    k=fn(n);

    if(n!=0)
    printf("%ld\n",k);
    }
}
long fn(long n)
{
  if(n<=0)
  {
    printf("error: n must > 0\n");

  }
  if(0==n%2)
    return (n/2)*(-1);
  else
    return (n/2)*(-1)+n;
}
