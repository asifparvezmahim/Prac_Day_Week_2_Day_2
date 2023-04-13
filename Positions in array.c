#include <stdio.h>
int main()
{
    long long int size, i;
    scanf("%lld", &size);
    long long int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] <= 10)
        {
            printf("A[%lld] = %lld\n", i, arr[i]);
        }
    }
    return 0;
}