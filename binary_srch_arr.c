// binary search of array of number
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,num,search,flag=0,big,mid,end;
    printf("\n enter the array size=");  //accept array size
    scanf("%d",&num);
    printf("\n enter the array elements=");  //accept array elements using for loop 
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the no to be search=");  //accept num to search
    scanf("%d",&search);
    big=0;                  
    end=num-1;
    while (big <= end)              
    {
        mid=(big+end)/2;
        if (arr[mid] == search)              //when the mid position element == ssearch num then flag=1 and loop break
        {
            flag=1;
            break;
        }
        else if (arr[mid] < search)         //when the mid position element is greater than search num then big=mid+1 position
        {
            big=mid+1;
        }
        else                                //when the mid position element is less than search num then big=mid-1 position
        {
            end=mid-1;
        }
    }
    if (flag == 1)
    {
        printf("\n num is found");
    }
    else
    {
        printf("\n num not found");
    }   
}