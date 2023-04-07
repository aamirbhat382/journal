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
```
Input: 5 , 10 , 3 
Output:
 Sum is 18
 Avg is 6
```: 
---


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
```
Input: 76 
Output:
```: Celsicus is 24.444445

---

# Calculate Number of Months & Days.


```c
#include<stdio.h>


int main(){
    int months , days;
    printf("Enter days\n");
    scanf("%d", &days);
    months=days/30;
    days = days%30;
    printf("Months = %d and Days = %d", months, days);
    return 0;
}


```
```
Input: 40 
Output:
```: Months = 1 and Days = 10
---