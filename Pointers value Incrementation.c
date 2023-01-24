#include <stdio.h>
int main ()
{
	int x = 10;//10
int *y = &x, *z;//*y = 12321341241, *z
*y = 5;//y=5
*y = *y + 10;//*y=5+10=15
++*y;//16
(*y)++;//17
z = y;//17
++z; // pointer increment
z = z + 10;
printf("%d",y);
printf("\n%d %d %d",x,*y,*z);
	
	
		
	
}
