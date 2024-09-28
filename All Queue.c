#include<stdio.h>
#include<conio.h>
int F=-1,R=-1,Q[5],MAX=5,ITEM;


int iffull() //normal queue
{
    if (R==MAX-1)
    {
        printf("\n queue is full");
        return 1;
    }
    else
        return 0;
}

/*
int iffull() // Circular queue
{
    if (F==(R+1)%MAX)
    {
        printf("\n queue is full");
        return 1;
    }
    else
        return 0;
}
*/

int insert(int ITEM)// Normal 
{
    if(iffull())
        printf("\n Overflow");
    else
    {
        if(R==-1)
            R=F=0;
        else
        {
            R=R+1;
        }
        Q[R]=ITEM;
        printf("\n Item inserted");
    }
}

/*
int insertRear(int ITEM)// Circular
{
    if(iffull())
        printf("\n Overflow");
    else
    {
        if(R==-1)
            R=F=0;
        else
        {
            R=(R+1)%MAX;
        }
        Q[R]=ITEM;
        printf("\n Item inserted");
    }
}
*/

/*
int insertFront(int ITEM)// Circular
{
    if(iffull())
        printf("\n Overflow");
    else
    {
        if(F==-1)
            R=F=0;
        else
        {
            F=(F+MAX-1)%MAX;
        }
        Q[F]=ITEM;
        printf("\n Item inserted");
    }
}
*/

delete()//Normal
{
    if(empty())
        printf("\n Underflow");
    else
    {
        ITEM=Q[F];
        if(F==R)
            F=R=-1;
        else
            F=F+1;

        printf("\n%d deleted",ITEM);
    }
}

/*
deleteFront()//Circular
{
    if(empty())
        printf("\n Underflow");
    else
    {
        ITEM=Q[F];
        if(F==R)
            F=R=-1;
        else
            F=(F+1)%MAX;

        printf("\n%d deleted",ITEM);
    }
}
*/

/*
deleteRear()//Circular
{
    if(empty())
        printf("\n Underflow");
    else
    {
        ITEM=Q[F];
        if(F==R)
            F=R=-1;
        else
            R=(R+MAX-1)%MAX; 

        printf("\n%d deleted",ITEM);
    }
}
*/

int empty()//Circular, Normal
{
    if(R==-1)
    {
        printf("\n queue is empty");
        return 1;
    }
    else
        return 0;
}

int display()//Normal queue
{
    if(empty())
    {
    }
    else
    {
        int i;
        i=F;
        while(i<=R)
        {
            printf("\n%d",Q[i]);
            i++;
        }
    }
}

/*
int display()//Circular queue
{
    if(empty())
    {
    }
    else
    {
        int i;
        if(F<=R)
        {
            i=F;
            while(i<=R)
            {
                printf("\n%d",Q[i]);
                i++;
            }
        }
        else
        {
            i=F;
            while(i<=MAX-1)
            {
                printf("\n%d",Q[i]);
                i++;
            }
            i=0;
            while(i<=R)
            {
                printf("\n%d",Q[i]);
                i++;
            }
        }
    }
}
*/
int main()
{
    iffull();
    empty();
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    display();
    delete();
    delete();
    delete();
    display();
    insert(40);
    insert(50);
    insert(60);
    display();
}