#include <stdio.h>

int main()
{
    int a[10], key, i, found = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
