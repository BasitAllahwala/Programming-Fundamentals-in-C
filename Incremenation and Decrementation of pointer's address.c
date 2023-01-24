#include <stdio.h>
 
// Driver Code
int main()
{
    // Integer variable
    int N = 4;
 
    // Pointer to an integer
    int *ptr1, *ptr2;
 
    // Pointer stores
    // the address of N
    ptr1 = &N;
    ptr2 = &N;
 
    printf("Pointer ptr1 "
           "before Increment: ");
    printf("%d \n", ptr1);
 
    // Incrementing pointer ptr1;
    ptr1++;
 
    printf("Pointer ptr1 after"
           " Increment: ");
    printf("%d \n\n", ptr1);
 
    printf("Pointer ptr1 before"
           " Decrement: ");
    printf("%d \n", ptr1);
 
    // Decrementing pointer ptr1;
    ptr1--;
 
    printf("Pointer ptr1 after"
           " Decrement: ");
    printf("%d \n\n", ptr1);
 
    return 0;
}
