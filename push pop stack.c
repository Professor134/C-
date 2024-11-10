#include<stdio.h>

int STK[5],MAX=5,TOP=-1, ITEM;

int isfull()
{
    if(TOP==MAX-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(TOP==-1)
        return 1;
    else
        return 0;    
}

int push()
{
    if(isfull())
        printf("\n stack is full");
    else
    {
        printf("\n enter num to push=");
        scanf("%d",&ITEM);
        TOP=TOP+1;
        STK[TOP]=ITEM;
        printf("\n ITEM inserted");
    }
}

int pop()
{
    if(isempty())
        printf("\n stack is empty");
    else
    {
        ITEM=STK[TOP];
        TOP=TOP-1;
        printf("\n item delete");
    }    
}

int display()
{
    int i;
    if(TOP>=0)
    {
        printf("\n stack=");
        for(i=TOP;i>-1;i--)
            printf("\n %d",STK[i]);
    }
    else
        printf("\n stack is empty");
}

int main()
{
  push();display();
  push();display();
  push();display();
  push();display();
  push();display();
  push();display();
  pop();display();
  pop();display();
}