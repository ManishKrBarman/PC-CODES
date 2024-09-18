// Author: Manish Kumar Barman

#include <stdio.h>

int main()
{
    int i, array[5], smallest, largest;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    smallest = largest = array[0];
    for (i = 1; i < 5; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    printf("Smallest element in the array is: %d\n", smallest);
    printf("Largest element in the array is: %d", largest);

    return 0;
}