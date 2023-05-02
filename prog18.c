#include <stdio.h>>
#include <limits.h>



int main(){
    int arr[5] = {0,1,2,4,9};
    int max = INT_MIN;
   
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
  printf("%d", max);
    return 0;
}