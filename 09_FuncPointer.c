#include <stdio.h>

int Add(int *a, int *b)
{
    printf("%d\n", &a);
    printf("%d\n", a);
    printf("%d\n", *a);
    int c = (*a) +(*b);
    return c;       // or "&c"
}
int main()
{
    int a=2, b=4;
    printf("%d\n",&a);

    int c = Add(&a, &b);
    printf("Sum = %d\n",c);
}
