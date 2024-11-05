#include<stdio.h>
int main()
{
    int arr[100],i,j,temp,size;
    printf("\n enter the array size=");
    scanf("%d",&size);
    printf("\n enter the array element=");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n unsorted");
    for(i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
// in above condition the numbr of ittrations are decreasing
//ex:-  if i=1,size=5 so size-i-1 <==> 5-1-1
// so the numr of ittration is 3 
        {
            if(arr[j]>arr[j+1])  
            {
                temp=arr[j];  //swap number
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n sorted data=");
    for(i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);
    }
}
