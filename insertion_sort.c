#include<stdio.h>
int main()
{
    int a[100];
    int i,j,key,n;
    printf("\n Enter the array size:\n");
    scanf("%d",&n);
    
    printf("Enter array numbers you want to sort:\n");
    for (i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++) 
    {
         key=a[i];  
         j=i-1;
        while(key<a[j] && j>=0)
        {
             a[j+1]=a[j];  
             j--;
        }
        a[j+1]=key; 
    }
    printf("\n Array after sorting:\n");
    for(i=0; i<=n-1; i++)
        printf("%d\t",a[i]);
    return 0;
}