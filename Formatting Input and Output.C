#include <stdio.h>

int main()
{
    int int1;
    char char1;
    float float1;
    scanf("%d", &int1);
    scanf(" %c", &char1);
    scanf("%f", &float1);
    printf("%d\n", int1);
    printf("%c\n", char1);
    printf("%.2f", float1);
}