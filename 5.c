#include <stdio.h>

int main()
{
    
    int N,I,r;
    printf("enter no.of cases:");
    scanf("%d",&N);
    printf("check for given number is a faboncii term or not\n");
    for(I=0;I<N;I++)
    {
        
    r=0;
    
    int n,a,b,c,i=0;
    
    
    printf("enter number\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("result=given number is fabonacii  series term\n");
    }
     if(n==1)
    {
        printf("result=given number is fabonacii  series term\n");
    }
    a=0;
    b=1;
    do
    {
        c=a+b;
     if(c==n)
    {
        r=1;
        
    }
    a=b;
    b=c;
    i=i+1;
    }while(c<=n);
    
    if(r==1)
    {
      printf("given number is fibonacii term\n");
    }
    else
    {
        printf("given number is not a fibonacii term\n");
    }
   }
    
    
    return 0;
}
