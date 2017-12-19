#include<stdio.h>
main()
{
int a=9,i,b=0,c=9,d=9,e=0;
for(i=1;i<=4;i++)
{
e+=c;
b=a*(10);
c=d+b;
a=b;
d=c;
}
printf("%d\n",e);
}
