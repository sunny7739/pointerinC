
/*#include <stdio.h>
int main()
{

    int A[] = {2,3,4,7,9,12};
    int i;
    for(i=0; i<6; i++){
        printf("address = %d\n",&A[i]);
        printf("address = %d\n",A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
        printf("\n");
    }
}
*/

// 1 Arrays as Function Arguments
/*
#include <stdio.h>

int Sum(int A[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++){
        sum += A[i];
    }
    return sum;
}
int main()
{
    int A[] = {2,3,5,7,9};
    int size = sizeof(A)/sizeof(A[0]);
    int total = Sum(A, size);
    printf("Sum of Elements is = %d \n",total);
}
*/

// 2 Arrays as Function Arguments
/*
#include <stdio.h>

int Sum(int A[])
{
    int sum=0;
    int size = sizeof(A)/sizeof(A[0]);
    printf("SOE - size of A = %d, size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
    for(int i=0; i<size; i++){
        sum += A[i];
    }
    return sum;
}
int main()
{
    int A[] = {2,3,5,7,9};

    int total = Sum(A);
    printf("Sum of Elements is = %d \n",total);
    printf("SOE - size of A = %d, size of A[0] = %d\n",sizeof(A),sizeof(A[0]));

}
*/

// Charcter Array amd Pointer
#include <stdio.h>
void print(char* c)
{
    while (*c != '\0') {
        printf("%c",*c);
        c++;
    }
}
int main()
{
    char c[20] = "hello";
    print(c);

}
