#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],TOP=-1;

int push()
{
    int val;
    if(TOP==MAX-1)
    {
        printf("\n overflow");
    }
    else
    {
        printf("\n enter num to push=");
        scanf("%d",&val);
        TOP++;
        stack[TOP]=val;
        printf("\n %d is inserted",val);
    }
}

int pop()
{
    int val;
    if(TOP==-1)
    {
        printf("\n underflow");
    }
    else
    {
        val=stack[TOP];
        TOP--;
        printf("\n %d is deleted",val);
    }
}

int display()
{
    int i;
    if(TOP==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        i=0;
        for(i=0;i<=TOP;i++)
        {
            printf("\n %d",stack[i]);
        }
    }
}

int main()
{
    int ch;
    printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
    while(1)
    {
        printf("\n enter choise=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("invalid");
        }
    }
}
