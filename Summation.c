/*
  Task: In this problem we have to find the sum of the values which is given and if the sum is negative then we will make it positive .In formal words, the sum should be in absolute format.

  Steps::::
     i) call an array and store the elements in the array
    ii) find out the sum of the array elements
   iii) if the result is negative then make it positive

*/

#include <stdio.h>
int main()
{
    long long int i, size, sum = 0;
    scanf("%lld", &size);
    long long int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    if (sum >= 0)
    {
        printf("%lld\n", sum);
    }
    else
    {
        sum = (-1) * sum;
        printf("%lld\n", sum);
    }

    return 0;
}