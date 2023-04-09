#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, choice;
    printf("Enter value of a & b\n");
    scanf("%d %d", &a, &b);
    printf("1 For Addition\n 2 For Subtraction\n 3 For Multiplication\n 4 For Division\n 5 For Exit\n");
    while (1)
    {
        printf("Enter Your Choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            c = a + b;
            printf("Answere is %d\n", c);
            break;
        case 2:
            c = a - b;
            printf("Answere is %d\n", c);
            break;
        case 3:
            c = a * b;
            printf("Answere is %d\n", c);
            break;
        case 4:
            c = a / b;
            printf("Answere is %d\n", c);
            break;
        case 5:
            exit(0);
        }
    }
}