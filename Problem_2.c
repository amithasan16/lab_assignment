// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     int i, j, temp;

//     char ara[30];

//     scanf("%s", ara);
//     int N = strlen(ara);

//     for (j = 0; j < N-1; j++)
//     {
//         for (i = 0; i < (N-j); i++)
//         {
//             if (ara[i] < ara[i + 1])
//             {
//                 temp = ara[i];
//                 ara[i] = ara[i + 1];
//                 ara[i + 1] = temp;
//             }
//         }
//     }
//     printf("%s",ara);
//     printf("\n");

//     return 0;
// }
#include <stdio.h>

#include<string.h>

void sort_string(char ara[])
{
   int i,j;
   char temp;
   int N = strlen(ara);


    for (j = 0; j < N-1; j++)

    {

        for (i = 0; i < (N-j); i++)

        {

            if (ara[i] < ara[i + 1])

            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;

            }

        }

    }

}

int main()

{
    char ara[300];


    scanf("%s", ara);
    sort_string(ara);
    printf("%s",ara);

    printf("\n");


    return 0;
}