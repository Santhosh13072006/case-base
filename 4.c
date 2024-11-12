// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    char k[100000];
    int i,j,n,a=0,l,b,e;
    printf("enter of gems:");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
    char s[100] ;
    
    printf("enter a string\n");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=1;j<l;j++)
        {
            if(s[i]==s[j]&&i!=j)
            {
                s[j]=' ';
            }
        }
    }
    
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            k[a]=s[i];
            a=a+1;
        }
    }
    
    }
    
    e=strlen(k);
    for(i=90;i<=122;i++)
    {
       int  count=0;
       char c=i;
       for(j=0;j<e;j++)
       {
           if(k[j]==c)
           {
               count=count+1;
           }
       }
       if(count==n)
       {
           printf ("%c is a gem element\n",c);
       }
   
   
    }
    return 0;
}
