#include<stdio.h>

int main()
{
    int a = 8;
    int *p;
    p = &a;            // &a = address of a
    printf("%d\n",p);
    printf("%d\n",a);   // a or *p
    *p = 7;             // derefencing
    printf("%d\n",a);

    printf("\n\n" );
    printf("Address of P is %d\n",p);
    printf("value of P is %d\n",*p);
    int b = 20;
    *p = b;
    printf("Address of P is %d\n", p);
    printf("value of P is %d\n", *p);

    printf("\n\n-------Pointer Arithmetic-------");
    printf("Address of p is %d \n",p);      //e.x 2002
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Address od p+1 is %d \n",p+1);  // e.x 2006
    printf("Address od p+1 is %d \n",p+2);  // e.x 2010

    return 0;
}
