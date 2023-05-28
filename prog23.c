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