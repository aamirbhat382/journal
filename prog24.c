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