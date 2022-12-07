#include <stdio.h>
#include<math.h>
int arr_beautiful_number(int *a,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        while(*(a+i)!=0)
        {
            if(*(a+i)%10==7)
            {
                flag++;
                break;
            }
            *(a+i)=*(a+i)/10;
        }
        if(flag>0)
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr_beautiful_number(arr,n)>=ceil((n*1.00)/2))printf("Beautiful\n");
    else printf("Ugly\n");
}