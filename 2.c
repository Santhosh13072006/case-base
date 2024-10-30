// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int N,M,k,i;
    printf("enter total no.of jars");
    scanf("%d",&N);
    printf("enter total no.of times you want to add candies:");
    scanf("%d",&M);
    int a[M],b[M],o;
    
    printf("enter total no.of candies to added ");
    scanf("%d",&k);
    for(i=0;i<M;i++)
    {
    
         printf("enter starting jar number in case %d\n",i+1);
         scanf("%d",&a[i]);
         printf("enter ending jar number in case %d\n",i+1);
         scanf("%d",&b[i]); 
        
    }
    int s=0;
    for(i=0;i<M;i++)
    {
        s=s+(b[i]-a[i]+1)*k;
        
    }
    o=s/N;
    printf("average =%d",o);

    

    return 0;
}
