// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int N,M,i;
    printf("enter total no.of jars");
    scanf("%d",&N);
    printf("enter total no.of times you want to add candies:");
    scanf("%d",&M);
    int a[M],b[M],o,k[M];
    
    
    for(i=0;i<M;i++)
    {
    
         printf("enter starting jar number in case %d\n",i+1);
         scanf("%d",&a[i]);
         printf("enter ending jar number in case %d\n",i+1);
         scanf("%d",&b[i]); 
         printf("enter no.of candies to be added  in case %d\n",i+1);
         scanf("%d",&k[i]); 
    }
    int s=0;
    for(i=0;i<M;i++)
    {
        s=s+((b[i]-a[i]+1)*k[i]);
        
    }
    o=s/N;
    printf("average =%d",o);

    

    return 0;
}
