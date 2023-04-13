#include <stdio.h>
int main()
{
    long long int size, i, pos;
    scanf("%lld", &size);
    long long int arr[size];
    long long int min = arr[0];
    for (i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i, i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i + 1;
        }
    }
    printf("%lld %lld", min, pos);
    return 0;
}