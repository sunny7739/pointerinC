#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}

void print(char *name)
{
    printf("Hello, %s\n",name);
}

void A()
{
    printf("Hello");
}
void B(void (*p) ())
{
    p();
}
int main()
{
    int c;
    int (*p)(int, int);
    p =Add;             // Function name will returns as pointer
    c = p(2,3);         // de-referencing and executing the function
    printf("%d\n",c);

    void (*ptr)(char*);
    ptr = print;
    ptr("Tom");

    B(A);
}
