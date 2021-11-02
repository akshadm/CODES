#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, Search;
    bool found = false;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &Search);
    found = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i] == Search)
        {
            found = true;
            break;
        }
    }

    if(found  1)
    {
        printf("\n%d is found at position %d", Search, i+1);
    }
    else
    {
        printf("\n%d is not found in the array", Search);
    }

    return 0;
}
