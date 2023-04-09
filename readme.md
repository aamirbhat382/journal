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
// Input: 5 , 10 , 3 
// Output:
 //  Sum is 18
 //  Avg is 6
```

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

// Input: 76 
// Output: Celsicus is 24.444445
```


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

// Input: 40 
// Output: Months = 1 and Days = 10

```

---

# Program To Check Weather a Letter is Vowel or Consonant

```c
#include<stdio.h>


int main(){
char ch;
printf("Enter a Letter \n");
scanf("%c", &ch);
switch (ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("You Have Entred %c Vowel Letter", ch);
    break;
default:
printf("You Have Entred %c Vowel Letter");
    break;
}
}

// Input: E
// Output: You Have Entred E Vowel Letter
```


--- 
# Program To Find Out Largest And Smallest Number


```c
#include<stdio.h>


int main(){
    int a=100,b=50,c=30;
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

// Input: a=30; b=50; c=20
// Output:
//  A is Smallest
//  B is Greatest

```

--- 

# Program To Find Out  Smallest Number


```c
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

//  Input: a=3500,b=5000,c=2000
//  Output: C is Smallest

```

--- 


# Simple Calculator Program 

```c
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


// Input: 100, 10, 4
//  Output: Answere is 10
```
---