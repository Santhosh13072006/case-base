// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    int d,f;
    printf("enter no.of cases:");
    scanf("%d",&f);
    for(d=0;d<f;d++)
    {
        
    
    char s[100],c,g[100],count;
    int i,l,j,a,b,n=0,m=0,k,h[100],e;
    printf("enter a string:");
    scanf("%s",s);
    l=strlen(s);
    strcpy(g,s);
    
    for(k=l-1;k>=0;k--)
    {
        
    
         for(i=l-1;i>=k;i--)
        {
             for(j=i-1;j>=k;j--)
            {
             a=s[i];
             b=s[j];
             
            
            if(a>b)
            {
                
                 c= s[i];
                 s[i]=s[j];
                 s[j]=c;
                 n=i;
                 m=j;
                 count=1;
                 
            
            break;
                
            }
            
            
             }
             if(strcmp(g,s)!=0)
            {
                break; 
            }
             
        }
        if(strcmp(g,s)!=0)
        {
            break;
        }
    }
    if(count==1)
    {
     
    for(i=m+1;i<l;i++)
    {
        int a=s[i];
        h[i]=a;
    }
    for(i=m+1;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(h[i]>h[j])
            {
                e=h[i];
                h[i]=h[j];
                h[j]=e;
            }
        }
    }
     for(i=m+1;i<l;i++)
    {
        char d=h[i];
        s[i]=d;
    }
    }
    

    
    if(strcmp(g,s)!=0)
    { 
      printf("bigger string is %s\n",s);
    }
    else
    {
        printf("no answer\n");
    }
    }
    

    return 0;
}
