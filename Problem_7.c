#include<stdio.h>
void swap_value(int *a,int *b)
{
   int buff;
   buff=*a;
   *a=*b;
   *b=buff;
}
int main()
{
   int n;
   scanf("%d",&n);
   int input[n+1];
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&input[i]);
   }
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int a,b;
      scanf("%d%d",&a,&b);
      swap_value(&input[a],&input[b]);
   }
   for(int i=1;i<=n;i++)
   {
      printf("%d ",input[i]);
   }
   printf("\n");
}