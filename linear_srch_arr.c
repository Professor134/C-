// linear search of array of number
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,num,search,flag=0;
    printf("\n enter the array size=");  //accept array size
    scanf("%d",&num);
    printf("\n enter the array elements=");  //accept array elements using for loop 
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the no to be search=");  //accept num to search
    scanf("%d",&search);
    for ( i = 0; i < num; i++)
    {
        if (search == arr[i]) 
        {
            flag=1;              //if num found in array flag=1 or flag=0
            break;
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