#include<stdio.h.
void max(int a,int b)
{
int temp_max;
if(a>b)
{
 temp_max=a;
}
else
{
 temp_max=b;
}
return temp_max;
}
void main()
{
int n,a,b,x[10],i;
printf("enter the number of terms");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&x[i]);
}

for(i=0;i<n-1;i++)
{
a=x[i];
b=x[i+1];
c=max(a,b);
x[i+1]=c;
}
printf("%d",c);
}
