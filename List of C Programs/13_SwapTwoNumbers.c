// Author: Manish Kumar Barman

#include <stdio.h>

// Using Call by Value

int cbv(int x, int y);

int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);

    cbv(a, b);

    return 0;
}

int cbv(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: a = %d, b = %d\n", x, y);
}

// Using Call by Reference

int cbr(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);

    cbr(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

int cbr(int *x, int *y)
{

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    return *x, *y;
}