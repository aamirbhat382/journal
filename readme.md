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

# #16 Program To  Check Number is Armstrong Or Not

```c
#include <stdio.h>

int main()
{
    int x, R, Q, a, sum = 0;
    printf("Enter a Number\n");
    scanf("%d", x);
    printf("%d", x);
    a = x;
    while (x > 0)
    {
        R = x % 10;
        sum = sum + (R * R * R);
        x = x / 10;
    }
    if (sum == a)
    {
        printf("Armstrong Number!!!");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
    return 0;
}
// Input: 87
// Output: Not a Armstrong Number
```
---

# #17 Program To  Search An Element in An Array

```c
#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, key, var = 0;
    printf("Enter number you want to search in the array: \n");
    scanf("%d \n", &key);
    for (i = 0; i < 10; i++)
    {
   
        if (key == arr[i])
        {
            // printf("%d \n", arr[i]);
            printf("key is present\n");
            var = 1;
        break;
        }
    }
    if (var == 0)
    {
        printf("key is not present\n");
    }
    return 0;
}
// Input: 9
// Output: key is present
```
---

# #18 Program To  Maximum Element in An Array

```c
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
// Input: 
// Output: 9
```
---

# #19 Program To  Print Elements Of Array Without Indices
```c
#include <stdio.h>

int main(){
    int i;
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[0];
    for(i=0;i<5;i++){
        printf("%d \n", *p);
        p++;
    }
    return 0;
}
// Input: 
// Output: 1,2,3,4,5 
```
---

# #20 Program To  Print Sum of Rows & Columns In 2D Array
```c
#include <stdio.h>

int main(void)
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int i, j, totalCol = 0;

    for (i = 0; i < 2; i++)
    {
        int sumRows = 0;
        int sumCol = 0;
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            sumRows = sumRows + arr[i][j];
            sumCol = sumCol + arr[j][i];
            // printf("\n%d", sumCol);
        }
        printf("= %d", sumRows);
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {

        int sumCol = 0;
        for (j = 0; j < 2; j++)
        {

            sumCol = sumCol + arr[j][i];
        }

        printf("%d\t", sumCol);
    }

    return 0;
}
// Input: 
// Output: 1	2	3	= 6
        // 4	5	6	= 15

        // 5	7	9
```
---

# #21 Program To  Transpose A Matrix Array
```c
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    printf("Original matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transposed matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
// Input: 
// Output:     Original matrix 
            // 1	2	3	
            // 4	5	6	
            // 7	8	9	

            // Transposed matrix
            // 1	4	7	
            // 2	5	8	
            // 3	6	9
```
---
# #22 Program To Print Sum Of Digonal Elements In 2D Array
```c
#include <stdio.h>

int main()
{
    int sum = 0;
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }
    printf("Sum of digonal digits of the matrix is = %d", sum);
    return 0;
}
// Input: 
// Output: Sum of digonal digits of the matrix is = 15
```
---
# #23 Strings In C
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Aamir";
    char lastname[20] = "Hussain";
    printf("%s\n", name);
    strcat(name,lastname);
    printf("%s\n",name);
    strcpy(name,lastname);
    printf("%s\n", name);
    
    return 0;
}
// Input: 
// Output:     Aamir
            // AamirHussain
            // Hussain
```
---

# #23 Structure In C
```c
#include <stdio.h>
#include <string.h>
struct book
{
    int page;
    char title[50];
    char author[20];
    float price;
} b1;

int main(void)
{

    struct book(b1);
    strcpy(b1.title, "let us c");
    strcpy(b1.author, "kanatkar");
    b1.page = 230;
    b1.price = 44;

    printf("Pages are %d\n", b1.page);
    printf("Price is %f\n", b1.price);
    printf("Title is %s\n", b1.title);
    printf("Author is %s\n", b1.author);
    return 0;
}
// Input: 
// Output:     Pages are 230
            // Price is 44.000000
            // Title is let us c
            // Author is kanatkar
```
---