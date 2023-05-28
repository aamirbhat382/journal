#include <stdio.h>

int main(void)
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int i, totalCol = 0;
   for (i = 0; i < 2; i++)
    {
        int sumRows =0;
        int  j=0;
        sumRows + arr[i][j];;
        
        for (j; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            sumRows = sumRows + arr[i][j];
        
        }
        printf("= %d", sumRows);
        printf("\n");
  
    }
  
    
    

    return 0;
}
// for (i = 0; i < 2; i++)
//     {
//         int sumRows = 0;
//         int sumCol = 0;
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", arr[i][j]);
//             sumRows = sumRows + arr[i][j];
//             sumCol = sumCol + arr[j][i];
//             // printf("\n%d", sumCol);
//         }
//         printf("= %d", sumRows);
//         printf("\n");
//         /// printf("= %d", sumCol);
//     }
  

  // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n");
    // }
    // for (i = 0; i < 3; i++)
    // {

    //     int sumCol = 0;
    //     for (j = 0; j < 2; j++)
    //     {

    //         sumCol = sumCol + arr[j][i];
    //     }

    //     printf("%d\t", sumCol);
    // }