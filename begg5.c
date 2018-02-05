#include<stdio.h>
int main()
{
 int N,K,temp;
 int count=0;
 int a[4];
 scanf("%d%d",&N,&K);
 for(int i=0;i<4;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int i=0;i<4;i++)
 {
     if(a[i+1]>a[i])
     {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
     }
     
 }
 printf("%d",a[1]);
 }
