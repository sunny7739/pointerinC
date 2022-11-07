#include <stdio.h>
#include <stdlib.h>

// malloc initilised with garbage value whereas calloc initilised with 0.
int main()
{
    int n;
    printf("Enter size of Arrray: ");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        A[i] = i+1;
    }
    for(int i=0; i<n; i++){
        printf("%d \t",A[i]);
    }
    printf("\n\n");

    int *B = (int*)realloc(A, 2*n*sizeof(int));
    printf("Previous BLock address = %d, New address = %d\n",A,B);
    for(int i=0; i<2*n; i++){
        printf("%d\n",B[i]);
    }
}
