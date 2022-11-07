#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("Address = %d, Value = %d \n", p, *p);

    char *p0;
    p0 = (char*)p;      // typecasting if we write "p0=p;" it willl give error
    printf("size of integer is %d bytes \n", sizeof(char));
    printf("Address = %d, Value = %d \n", p0, *p0);
    // 1025 = 00000000   00000000   00000100  00000001  since char takes 1 bytes it print the last binart no.
    printf("Address = %d, Value = %d \n", p0+1, *(p0+1));
    // it will print the 2nd binary value i.e 00000100 = 4

}
