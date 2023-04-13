#include <stdio.h>
int main()
{
    int size, n, i, index = -1, value;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &value);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {

            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}