#include <stdio.h>
#include <string.h>


int main()
{
	char name[50];
	printf("Enter name");
	gets(name);
	int i;
	char val;
	
	for(i=1;i<=strlen(name);i++)
	{
		val=name[strlen(name)-i];
//		printf("%c",name[i]);
		printf("%c",val);	
	}
}
