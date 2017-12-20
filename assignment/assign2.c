#include<stdio.h>
int main() 
{
    char a[10];
    gets(a);
    int b[10];
    int j,sum;

     for(j=0;a[j]!='\0';j++)
    {
        if(a[j]=='i')
        {
            b[j]=1;
        }
        else if(a[j]=='v')
        {
            b[j]=5;
        }
        else
        {
            b[j]=10;
        }
    
    }
        sum=b[0];
        {
        if(b[0]>b[1])
        {
            sum+=b[1];
        }
        else if(b[0]<b[1])
        {
            sum=b[1];
            sum-=b[0];
        }
        else
        {
           sum+=b[1]; 
        }
        printf("%d",sum);
    return 0;
        }
}
