#include <stdio.h>
int main ()
{
	int arr[]={1,2,3,4,5,6};
	int *p=arr;
	int i;
	
	for(i=0;i<6;i++)
	{
		printf("%d",*p+i+1);
	}
}
