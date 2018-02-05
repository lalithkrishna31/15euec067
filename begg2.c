#include<stdio.h>
int main()
{
 int N,K;
 int a[4];
 scanf("%d%d",&N,&K);
 for(int i=0;i<3;i++)
 {
     scanf("%d",&a[i]);
     if(a[i]==K)
     {
         printf("Yes");
         return 0;
     }
 }
     
     {
         printf("No");
     }
 }
