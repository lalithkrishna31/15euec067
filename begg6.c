#include<stdio.h>
int pwr(int a, int b)
{
    int c=a;
    do
    {
        c*=a;
        b--;
    }
    while(b!=0);
    return c;
}
void main()
{
     int N,K,a;
    int count=0;
    scanf("%d%d",&N,&K);
    a=N;
    do
    {
        a=a/10;
        count++;
    }
    while(a!=0);
    printf("%d\n",count);
    if(count-1!=0)
    K+=N*(pwr(10,count-1));
    else
      K+=N*10;
    printf("%d",K);

}
