#include <stdio.h>
int main ()
{
	int i,j;
	int arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
