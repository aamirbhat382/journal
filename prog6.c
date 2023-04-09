#include<stdio.h>


int main(){
    int a=3500,b=5000,c=2000;
    if(a<b){
        if(a<c){
            printf("A is Smallest\n");
        }else{
            printf("C is Smallest\n");
          

        }
    }else
    {
        if(b<c){

            printf("B is Seatest\n");
        }else{
            printf("C is Smallest\n");
        }
    }
    
    return 0;
}