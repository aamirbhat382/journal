# #1 Program For Average Of Three(3) Numbers.

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

# #2 Program For Convert Fernite To Celsius.

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

# #3 Calculate Number of Months & Days.

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

# #4 Program To Check Weather a Letter is Vowel or Consonant

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

# #5 Program To Find Out Largest And Smallest Number

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

# #6 Program To Find Out Smallest Number

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

# #7 Simple Calculator Program

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

# #8 Program To Check Student Grades Using Nested if-else

```c
#include<stdio.h>

int main()
{
    int marks;

    printf("Enter your Marks : \n");
    scanf("%d", &marks);
  if(marks<40){
    printf("Failure You need some motivation");
  }
  else if(marks>=40 && marks<50){
    printf("Grade:D");
  }
  else if (marks>=50 && marks<60){
    printf("Grade:C");
  }
  else if (marks>=60 && marks<70){
    printf("Grade:B");
  }
  else if(marks>=70 && marks<101){
    printf("Excellent!!!");
  }
   else if(marks>100 && marks<1){
    printf("Enter a Valid Marks");
  }
}

// Input : 66
// Output : Grade:B
```

---

# #9 Program To Print Half Pyramid of \* (stars)

```c
#include <stdio.h>

int main() {
  int i, j;
  for(i=0; i<5; i++)
  {
    for(j=0; j<=i; j++){

      printf("*");
    }
      printf("\n");

  }
  return 0;
}

// Input:
// Output:
/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/

```

---

# #10 Program To Print Inverted Half Pyramid of \* (stars)

```c
#include <stdio.h>

int main()
{

    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++){

            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// Input:
// Output:
/*
    * * * * *
    * * * *
    * * *
    * *
    *
*/

```

---

# #11 Program To Print Half Pyramid of Numbers In Row

```c
#include<stdio.h>
int main()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++){

            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

// Input:
// Output:
/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/

```
---


# #12 Program To Print Half Pyramid of Numbers In Column

```c
#include<stdio.h>
int main()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++){

            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

// Input:
// Output:
/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

```

--- 


# #13 Program To print Fibanacci Series
```c
#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, i, num, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = n1 + n2;
        printf("The value of %d numbers is %d\n ", num, sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}
// Input: 5
// Output: 
/*
    The value of 5 numbers is 1
    The value of 5 numbers is 2
    The value of 5 numbers is 3
    The value of 5 numbers is 5
    The value of 5 numbers is 8
*/

```

--- 

# #14 Program To Print Sum of Squares

```c
#include <stdio.h>

int main() {
int n, i, sum=0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    sum = sum + (i*i);
      printf("sum of squared %d numbers = %d\n", n, sum);
  }
  return 0;
}
// Input: 5
// Output: 

/*
    sum of squared 1 numbers = 1
    sum of squared 2 numbers = 5
    sum of squared 3 numbers = 14
    sum of squared 4 numbers = 30
    sum of squared 5 numbers = 55
*/
```

---


# #15 Program To  Print Factorial of a Number

```c
#include <stdio.h>

int main() {
int n, i, fact=1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    fact = fact*i;
  }
  printf("Factorial of %d is %d", n, fact);
  return 0;
}
// Input: 5
// Output: Factorial of 5 is 120
```
---