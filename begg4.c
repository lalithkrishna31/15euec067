#include<stdio.h>
int main()
{
 int N,K;
 int count=0;
 int a[4];
 scanf("%d%d",&N,&K);
 for(int i=0;i<4;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int i=0;i<4;i++)
 {
     if(a[i]%2!=0)
     {
         count++;
     }
     if(count==2)
     {
         printf("%d",a[i]);
     }
 }
 }
