#include<stdio.h>
int main()
{
	int a[100],n,i,j,k,t,count=0;
	scanf("%d\n",&n);
	scanf("%d",&k);
	while(n!=0)
	{
		t=n%10;
		a[count]=t;
		count++;
		n=n/10;
	}
	a[count]='\0';
	for(i=0;i<count;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<count;i++)
	{
		for(j=0;j<count-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	j=count-k;
	return 0;
}
