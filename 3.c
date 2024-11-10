
#include <stdio.h>
int main()
{
    int n,k,h,t,i;
    printf("enter no.of test cases:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    int count=0;
    printf("enter  a number:");
    scanf("%d",&n);
    k=n;
    do
    {
        
        h=n%10;
        if(h==0)
        {
            n=n/10;
            continue;
        }
        else
        {
            if(k%h==0)
           {
               count=count+1;
               n=n/10;
           }
           else 
           {
               n=n/10;
           }
        
        }
    }while(n!=0);
    printf("%d\n",count);
    }
return 0;
    
}
