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