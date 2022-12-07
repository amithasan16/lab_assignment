#include <stdio.h>
#include <stdbool.h>
bool div_by_3(int);
bool div_by_5(int);
int count(int[], int);

int main()
{
    int n, Count = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    Count = count(array, n);
    printf("%d", Count);
}


int count(int arr[], int size)  // count function
{
    int count_number = 0;
    for (int i = 0; i < size; i++)
    {
        if (div_by_3(arr[i]) && div_by_5(arr[i]))
        {
            count_number++;
        }
        else if (div_by_3(arr[i]))
        {
            count_number++;
        }
        else if (div_by_5(arr[i]))
        {
            count_number++;
        }
    }
    if (count_number != 0)
        return count_number;
    else
        return -1;
}


bool div_by_3(int i) // Function divisble by 3
{
    if (i % 3 == 0)
    {
        return true;
    }
    return false;
}


bool div_by_5(int i) // Function by div_5
{
    if (i % 5 == 0)
    {
        return true;
    }

    return false;
}