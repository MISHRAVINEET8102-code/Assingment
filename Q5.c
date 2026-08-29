// 5. Write a C program to insert an element at the specific point of an array.
#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    int element, position;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    for(int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    printf("Array after insertion: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}