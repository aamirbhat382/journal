#include <stdio.h>

int main()
{
    int sum = 0;
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }
    printf("Sum of digonal digits of the matrix is = %d", sum);
    return 0;
}