#include <stdio.h>

int main()
{
    int x, R, Q, a, sum = 0;
    printf("Enter a Number\n");
    scanf("%d", x);
    printf("%d", x);
    a = x;
    while (x > 0)
    {
        R = x % 10;
        sum = sum + (R * R * R);
        x = x / 10;
    }
    if (sum == a)
    {
        printf("Armstrong Number!!!");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
    return 0;
}