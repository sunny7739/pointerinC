#include <stdio.h>

int _1D(int *A)     // 1-D array
{

}
void _2D(int (*A)[3])     // 2-D array or "A[][3]"
{

}
void _3D(int (*C)[2][2])     // 3-D or "C[][2][2]"
{

}
int main()
{
    int C[3][2][2] = {{{2,5},{7,9}},
                    {{3,6},{7,1}},
                    {{9,3},{23,76}}};
    // printf("%d %d %d %d \n", c,*c, c[0], &c[0][0]);
    // printf("%d\n",*(c[0][0]+1));

    int A[2] = {1,2};
    int B[2][3] = {{2,4,6}, {5,6,8}};
    _1D(A);
    _2D(B);
    _3D(C);
}
