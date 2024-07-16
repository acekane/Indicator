#include<stdio.h>
#include<conio.h>
int main() {
    char str[100];
    char *ptr;
    printf("Enter any string: ");
    scanf("%[^\n]s", str);
    ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    printf("The length of a string is: %d\n", (ptr - str));
    return 0;
}

