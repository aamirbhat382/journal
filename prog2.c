#include<stdio.h>


int main(){
    float f ,c;
    printf("Enter your body temperture\n");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("Celsicus is %f", c);
    return 0;
}