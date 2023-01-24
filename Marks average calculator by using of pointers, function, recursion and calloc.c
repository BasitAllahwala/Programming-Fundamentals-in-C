#include <stdio.h>//Standard Input/Output
#include <stdlib.h>//Imports all C libraries 
int arrange(int *ptr, int n)
{
	int i;
	if(ptr==0)
	{
		
		return 0;
	}else if(ptr>ptr+n)
	{
		return arrange((int*)ptr+n,n);
	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d\n",*(ptr+i));
//	}
}

int average(int *ptr, int n)
{
	int i,sum=0,avg;
	for(i=0;i<n;i++)
	{
		sum=sum + *(ptr+i);
	}
	avg=sum/n;
	return avg;
}

int main ()
{
	int n,recursion,avg;
	int i;
	printf("How many students are present?");
	scanf("%d",&n);
	int *ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not allocated\n");
	}else
	{
		printf("Memory is allocated\n");
		
		for(i=0;i<n;i++)
		{
			printf("Enter your marks");
			scanf("%d",ptr+i);
		}
		printf("\nYour marks are...\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",*(ptr+i));
		}
	}
	printf("\n\n");
	avg=average(ptr,n);
	printf("Your average is %d\n",avg);
	recursion=arrange(ptr,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",recursion);
	}
	
	
}
