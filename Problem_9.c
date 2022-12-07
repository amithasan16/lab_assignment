#include <stdio.h>
#include<math.h>
int primes(int *arr , int n)
{
  int count=0;

   for(int i=0; i<n ; i++)
   {
       int flag=0;
    for (int j = 2; j <= arr[i]/2; j++)
    {
     if (arr[i] % j == 0)
      {
      flag = 1;
      break;
      }
    }
  if (flag== 0) 
  count++;
     }
   return count;
}

float avarage(int *arr, int n)
{
    float avg,sum=0.0;
    int K = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
            K++;
        }
    }
    avg=(float)sum/K;
    return avg;
}

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);

    printf("Prime numbers: %d\n",primes(arr,n));
    printf("Average of all even integers: %.2f",avarage(arr,n));
}