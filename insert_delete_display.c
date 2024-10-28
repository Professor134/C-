#include<stdio.h>
#include<stdlib.h>

int a[20],n,i,key,pos;
void create();
void insert();
void delet();
void display();

int main()
{
    int ch;
    do
    {
        printf("\n1.create \n2.insert \n3.delete \n4.display \n5.exit");
        printf("\n enter the choise=");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delet();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        
        default:
            printf("\n invalid choise");
            break;
        }
    }while(ch!=5);
    return 0;
}

void create()
{
    printf("\n eneter the array size=");
    scanf("%d",&n);
    printf("\n enetr the array element=");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    printf("\nthe array no are=");
    for ( i = 0; i < n; i++)
    {
        printf("\t %d",a[i]);
    }
}

void insert()
{
    printf("\nenter the positt=ion of new element=");
    scanf("%d",&pos);
    printf("\nenter the element to insert=");
    scanf("%d",&key);
    for ( i = n-1; i >= pos; i--)
    {
     a[i+1]=a[i];
    }
    a[pos]=key;
    n=n+1;
}

void delet()
{
    printf("\n enter the position to delete=");
    scanf("%d",&pos);
    key=a[pos];
    for ( i = pos; i <= n-1; i++)
    {
     a[i]=a[i+1];
    }
    n=n-1;
    printf("\n %d is deleted",key);
}
