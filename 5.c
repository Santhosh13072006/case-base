
#include <stdio.h>

int main()
{
    int n,a,b,c,i=0;
    
    printf("check for given number is a faboncii term or not\n");
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
        printf(" reslut=given number is fabonacii  series term\n");
    }
    a=b;
    b=c;
    i=i+1;
    }while(c<=n);
    printf("if result is not specified then it is not a fabonacii series term");
    
    return 0;
}
