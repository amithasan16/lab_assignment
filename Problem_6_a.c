#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int sum, k = 4, first_number;
        scanf("%d", &sum);
        int rem = sum % 4;
        if (rem != 0 || (sum / 4) % 2 == 0)
        {
            printf("Wrong Input\n");
        }
        else
        {
            first_number = (sum / 4) - 3;
            printf("%d %d %d %d\n", first_number, first_number + 2, first_number + 4, first_number + 6);
        }
    }
}