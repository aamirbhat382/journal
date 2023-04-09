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