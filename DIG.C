#include<stdio.h>
void main()
{
    int a,c=0;
    scanf("%d",&a);
    while(a)
    {
        c++;
        a=a/10;
    }
    printf("%d",c);
    getch();
}
