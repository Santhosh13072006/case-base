// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    int N,i;
    printf("enter no.of test cases:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        char s[100],a[100];
        int l,h[100],k[100],j,c,m[100];
        printf("enter a string\n");
        scanf("%s",s);
        l=strlen(s);
        s[l]='\0';
        for(j=0;j<l;j++)
        {
            h[j]=s[j];
        }
        
         
        for(j=0;j<l;j++)
        {
            k[j]=h[l-j-1];
        }
        
        for(j=1;j<l;j++)
        {
            if(k[0]>k[j])
            {
                c=k[j];
                k[j]=k[0];
                k[0]=c;
                break;
                
            }
        }
         
        for(j=0;j<l;j++)
        {
            m[j]=k[l-j-1];
        }
         
        for(j=0;j<l;j++)
        {
            a[j]=m[j];
        }
        a[l]='\0';
        
        if(strcmp(s,a)==0)
        {
            printf("no answer");
        }
        else
        {
            printf("lexographically bigger string is \n");
            for(j=0;j<l;j++)
        {
            printf("%c",a[j]);
        }
        }
        printf("\n");
    }

    return 0;
}
