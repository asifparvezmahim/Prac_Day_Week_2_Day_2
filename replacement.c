#include <stdio.h>
int main()
{
    long long size, i;
    scanf("%lld", &size);
    long long int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}