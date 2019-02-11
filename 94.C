#include<stdio.h>
void main()
{
    int a[10],N,k,i;
    scanf("%d%d",&N,&k);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(i==k)
        {
            printf("%d",a[i]);
        }
    }
    
    getch();
} 
© 2019 GitHub, Inc
