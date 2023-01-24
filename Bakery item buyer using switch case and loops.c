#include <stdio.h>
int main ()
{
	int size,i,price=0;
	
	printf("Welcome to Pie In The Sky\n");
	
	printf("Enter how many bakery items you want");
	scanf("%d",&size);
	
	char let;
	
	
	for(i=0;i<size;i++)
	{
		printf("Enter what category item you want, Press 'C' for a cake item or 'B' for a biscuit item");
		scanf(" %c",&let);
		switch(let)
		{
			case 'C':
				printf("Your choice is cake\n");
				printf("Your price is 500rs\n");
				price=price + 500;
			break;
			case 'B':
				printf("Your choice is biscuit\n");
				printf("Your price is 200rs\n");
				price=price + 200;
			break;
			default:
				printf("Item aint available\n");
			break;			
		}
	}
	printf("\nYour price is %d",price);
	
}
