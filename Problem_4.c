#include <stdio.h>

int first_even(int n)//Even Function definition
{
    int ev1 = (n / 4) - 3;
    return ev1;//Return value
}
int main()
{
    int T;
    scanf("%d", &T);//Test case
    for (int i = 0; i < T; i++)
    {
        int N, ev;
        scanf("%d", &N);
        ev = first_even(N);//Function call
        printf("%d %d %d %d\n", ev, ev + 2, ev + 4, ev + 6);
    }
    return 0;
}