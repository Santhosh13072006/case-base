
#include <stdio.h>
int main()
{
    int n,k,count,h;
    printf("enter  a number:");
    scanf("%d",&n);
    k=n;
    do
    {
        h=n%10;
        if(k%h==0)
        {
            count=count+1;
        }
        n=n/10;

    }while(n!=0);
    printf("%d",count);

return 0;
    
}

