// Author: Manish Kumar Barman

// The Fibonacci sequence is a series of numbers in which each number (Fibonacci number) is the sum of the two preceding ones. The sequence starts with 0 and 1: 0,1,1,2,3,5,8,13,21,34,…

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            printf("%d ", first);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}