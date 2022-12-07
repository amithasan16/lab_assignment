#include <stdio.h>
int sum_of_elements(int *arr , int n)
{
   int i=0,sum=0;

   for(i=0; i<n ; i++)
   {
       if( (arr[i]+i)%2 )
       {
           sum+=arr[i]+i+1;
       }
   }
   return sum;
}
int main()
{
    int total;
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    
    total = sum_of_elements(arr,n);
    printf("%d",total);
    return 0;
}