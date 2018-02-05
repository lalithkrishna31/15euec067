#include<stdio.h>
void main()
{
     int a;
    int count=0;
    scanf("%d",&a);
    do
    {
        a=a/10;
        count++;
    }
    while(a!=0);
    printf("%d",count);
}
