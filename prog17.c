#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, key, var = 0;
    printf("Enter number you want to search in the array: \n");
    scanf("%d \n", &key);
    for (i = 0; i < 10; i++)
    {
   
        if (key == arr[i])
        {
            // printf("%d \n", arr[i]);
            printf("key is present\n");
            var = 1;
        break;
        }
    }
    if (var == 0)
    {
        printf("key is not present\n");
    }
    return 0;
}