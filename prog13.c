#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, i, num=5, sum = 0;
    printf("Enter the number of elements: ");
    // scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = n1 + n2;
        printf("The value of %d numbers is %d\n ", num, sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}