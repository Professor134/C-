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

int main()
{
  push();
  push();
  push();
  push();
  push();
  push();
  pop();
  pop();
}