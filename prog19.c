
#include <stdio.h>

int main(){
    int i;
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[0];
    for(i=0;i<5;i++){
        printf("%d \t", *p);
        p++;
    }
    return 0;
}