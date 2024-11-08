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
    for(i=0; i<n; i++)
    {
         small=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        temp=a[i];
        a[i]=a[small];
        a[small]=temp;
    }
    printf("\n Array after sorting:\n");
    for(i=0; i<=n-1; i++)
        printf("%d\t",a[i]);
    return 0;
}