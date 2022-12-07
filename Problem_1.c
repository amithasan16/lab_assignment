#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    bool is_positive = true;
    for (int i = 1; i <= n; i++)
    {
        if (is_positive)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
        if (i % 3 == 0)
        {
            is_positive = !is_positive;
        }
    }
    printf("%d", sum);
}