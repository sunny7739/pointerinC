// WAP to reverse a number using Pointer.


#include <stdio.h>

int main()
{
    int num, c, r=0;
    int *p1, *p2;

    printf("Enter the number: " );
    scanf("%d\n", &num);

    p1 = &num;
    p2 = &r;

    do{
        c = (*p1) % 10;
        *p2 = (*p1 * 10) + c;
        *p1 = (*p1) / 10;
    }while(*p1 >0);

    printf("Reverse number is: %d ", *p2);
}
