#include <stdio.h>
int main ()
{
	int i,j,k;
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{1,2},{3,4}};
	int c[2][2];
	int *ptr1,*ptr2,*ptr3,sum=0;
	ptr1 = a;
	ptr2 = b;
	ptr3 = c;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				sum=*(*(ptr1+k)+j)* *(*(ptr2+i)+k);
			}
			*ptr3=*(*(ptr3+i)+j)+sum;
			sum=0;
		}
	}
	printf("Your Resultant vector is...");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",*(*(ptr3+i)+j));
		}
	}
	
}
