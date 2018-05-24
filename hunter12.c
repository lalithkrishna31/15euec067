#include<stdio.h>
int main()
{
    int a[10],n1,n2,i;
    scanf("%d",&n1);
        scanf("%d",&n2);

    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n2;i++)
    {
        if(i==(n2-1))
        {
        printf("%d",a[i]);
        }
    }
    return 0;
}
