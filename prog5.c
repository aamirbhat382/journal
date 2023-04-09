#include<stdio.h>


int main(){
    int a=30,b=50,c=20;
    if(a<b){
        if(c>b){
            printf("A is Smallest\n");
            printf("C is Greatest\n");
        }else{
            printf("A is Smallest\n");
            printf("B is Greatest\n");

        }
    }else
    {
        
            printf("A is Greatest");
    }
    
    return 0;
}