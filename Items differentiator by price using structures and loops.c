#include <stdio.h>
struct Item_Data{
	char name [20];
	int price;
	int q;
};
int get_info(struct Item_Data k[20])
{
	char let;
	int i;
	printf("\t\t***CHEAP***\t\t***MODERATE***\t\t***EXPENSIVE***\t\t");
	printf("\n\n");
	printf("Press 'C' for Cheap, 'M' for Moderate, 'E' for expensive");
	scanf(" %c",&let);
	if(let=='C')
	{
		for(i=0;i<8;i++)
		{
			if(k[i].price<20)
			{
				printf("Item NO#%d is %s\n",i,k[i].name);
				printf("Quantity is %d\n",k[i].q);
			}
		}
	}else if(let=='M')
	{
		for(i=0;i<8;i++)
		{
			if(k[i].price>20 && k[i].price < 100)
			{
				printf("Item No #%d is %s\n",i,k[i].name);
				printf("Quantity is %d\n",k[i].q);
			}
		}
	}else if(let=='E')
	{
		for(i=0;i<8;i++)
		{
			if(k[i].price>100)
			{
				printf("Item No #%d is %s\n",i,k[i].name);
				printf("Quantity is %d\n",k[i].q);
			}
		}
	}
}
int main()
{
	struct Item_Data k[8];
	int i;
	for(i=0;i<8;i++)
	{
		printf("Enter name.");scanf("%s",k[i].name);
		printf("Enter price.");scanf("%d",&k[i].price);
		printf("Enter quantity");scanf("%d",&k[i].q);
	}
	get_info(k);
}
