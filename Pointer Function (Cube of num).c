#include <stdio.h>
int  *cube(int a);//Pointer function
int main()
{
int num, *p;
printf("Enter number");
scanf("%d",&num);
p= cube(num);//p<--- cube(num)
printf("The cuber of num %d is %d",num, *p);
return 0;
}
int  *cube(int a)
{
static int x=0;
x= a*a*a;
return &x;
}


//p=10
//*z=p
//*z=10;
