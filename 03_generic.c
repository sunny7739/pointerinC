// Generic pointer : It can point to object to any type.
/*
#include <stdio.h>
int main()
{
    int a =5;
    float b = 10.54;
    void *p;
    p = &a;
    printf("Value of is = %d\n", *(int*)p);
    p = &b;
    printf("Value of is = %.2f\n", *(float*)p);
}
*/

// Null Pointer : It point to nothing.
/*
#include <stdio.h>
int main()
{
    int num = NULL;
    printf("%d\n",++num);
}
Variable Representation:-
float *ptr = (float*)0;
char *ptr = (char*)0;
char *ptr = '\o';
int *ptr = NULL;
*/

// Dangling Pointer : It arise when an object is deleted or de-allocated, with modifiying the value of the pointer, so that the pointer stil points to the memory location of the  deallocated memory.
#include <stdio.h>
int main()
{
    int *ptr;
    {
        int x=5;
        ptr = &x;
        printf("Address of x=%x and the value of x = %d\n",ptr, x);
    }
    printf("Address of x = %d \n",ptr);
}
