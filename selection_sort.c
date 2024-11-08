#include<stdio.h>
int main()
{
    int a[100];
    int i,j,temp,n,small;
    printf("\n Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter array numbers you want to sort:\n");
    for (i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++) // to set smallest number to starting of array
    {
         small=i;
        for(j=i+1; j<n; j++) //this loop is use to find smallest number from array 
        { 
            if(a[j]<a[small]) 
            {
                small=j; //after nth iteration smallest value of array present in small
            }
        }
        temp=a[i];  // small move to a[i]
        a[i]=a[small];
        a[small]=temp;
    }
    printf("\n Array after sorting:\n");
    for(i=0; i<=n-1; i++)
        printf("%d\t",a[i]);
    return 0;
}