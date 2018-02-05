#include<stdio.h>

int main() {
   int a,p,count=0;
   scanf("%d",&a);
   p=2*a;
   for(int i=0;i<p;i++)
   {
       for(int j=i+1;j<p;j++)
       {
           count++;
       }
   }
   printf("%d",count);
   return 0;
}
