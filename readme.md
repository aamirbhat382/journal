# Program For Average Of Three(3) Numbers.

```c
#include <stdio.h>

int main(){
    int a,b,c ,sum, avg;
    printf("Enter a value of a,b & c\n");
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Sum is %d \n" , sum);
    printf("Avg is %d \n" , avg);
    return 0;
}

```
...

# Program For Convert Fernite To Celsius.

```c
#include<stdio.h>


int main(){
    float f ,c;
    printf("Enter your body temperture\n");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("Celsicus is %f", c);
    return 0;
}
```

...