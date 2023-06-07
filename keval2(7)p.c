#include<stdio.h>

variable(int a[])
{
	int i,sum=0,ave,n;
	printf ("enter your value =");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<=a[i];i++)
	{
		sum = sum + a[i];
	}
	printf("sum are all value = %d",sum);
	
}
main()
{
	int array[100];
	variable(array);
}


