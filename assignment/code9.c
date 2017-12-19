#include<stdio.h>

int main() {
   int n,i,sum=0;
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       sum++;
   }
   printf("%d",sum);
}
