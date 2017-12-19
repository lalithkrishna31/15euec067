#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
    printf("the largest no is %d",a);
}
else if(b>a&&b>c)
{
    printf("the largest no is %d",b);
}
else
{
    printf("the largest no is %d",c);
}
}
