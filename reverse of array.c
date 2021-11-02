#include <stdio.h>

int main()
{
    //Initializing the main array
    int arr[] = {1, 2, 3, 4};

    //Calculating length of array
    int length = sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray in reverse: \n");
    for (int i = length-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
