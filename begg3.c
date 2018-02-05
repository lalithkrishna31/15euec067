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
     if(a[i]==K)
     {
         count++;
     }
 }
         printf("%d",count);
 }
