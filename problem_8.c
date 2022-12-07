// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000];
//     scanf("%s",&s);
//     for(int i=0; i<strlen(s); i++)
//     {
//         if(i%2) 
//         printf("%c%c",s[i],s[i]);
//         else 
//         printf("%c",s[i]);
//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
void xprint(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        if(i%2) 
        printf("%c%c",s[i],s[i]);
        else 
        printf("%c",s[i]);
    }
    printf("\n");
}
int main()
{
    char s[1000];
    scanf("%s",s);
    xprint(s);
    return 0;
}