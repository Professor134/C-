#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
struct node
{   //Remember this structure
    int data;                     // for all link list programe
    struct node *next;
};

struct node *head;         //head is starting point of link list

// createing link list
void create()
{
    int val, size, i;
    struct node *t;            //  *t is created for move forward
    head=(struct node *)malloc(sizeof(struct node));        //this command allocat memory for head
    if(head == NULL)
    {
        printf("\n no memory is allocated");
    }
    else
    {
        printf("\n enter the size of link list =");
        scanf("%d",&size);
        printf("\n enter the data of node1=");
        scanf("%d",&val);
        head->data = val;            //insert data in 1st node
        head->next = NULL;      // NULL show there no node next to head
        t = head;        //head address into t

        for(i = 2 ; i <= size ; i++)
        {
            struct node *newnode;
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("\n enter the data of node%d =",i);
            scanf("%d",&val);
            newnode->data = val;            //data in new crated node
            newnode->next = NULL;        //no node next to new node
            t->next = newnode;        //insrting newnode address into next part of t node
            //for 1st irration t is head node as per line 29
            t= t->next;                 //now we move t forword  to newly created node
        }
    }
}

void display()
{
    if(head == NULL)
    {
        printf("\n link list is empty");
    }
    else
    {
        struct node *t;         //pointr *t copy of head
        t = head;
        printf("\n Data=\n");
        while( t != NULL)        //move t till node is not Null
        {
            printf("%d->", t->data);
            t = t->next;            //move t to next node
        }
        printf("NULL \n");
    }
}

void insertbeg()
{
    struct node *t;
    t =(struct node *) malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\n memory not allocated");
    }
    else
    {
        int val;
        printf("\n enter the data for insertbeg node=");
        scanf("%d",&val);
        t->data = val;
        t->next = head;
        head = t;
    }
}

void insertend()
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\n memory not allocated");
    }
    else
    {
        int val;
        struct node *p;         //copy of head created as p
        p =head;
        printf("\n enter the data for insertend node= ");
        scanf("%d",&val);
        t->data = val;
        t->next = NULL;
        // move p to the last node
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = t;
    }
}

void insertmid()
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\n memory not allocated");
    }
    else
    {
        int val, pos;
        struct  node *p;
        p = head;
        printf("\n enter the node data after new node will insert=");
        scanf("%d",&pos);
        while(p->data != pos)
        {
            p = p->next;
        }
        printf("\n enter the data for insertmid node= ");
        scanf("%d",&val);
        t->data = val;
        t->next = p->next;
        p->next = t;
    }
}

void search()
{
    struct node *t;
    int pos, found=0;
    t = head;
    printf("\n enter the node data to search =");
    scanf("%d",&pos);
    while(t != NULL)
    {
        if(t->data == pos)
        {
            found =1;
            break;
        }
        else
        {
            t = t->next;
        }
    }
    if(found==1)
      printf("\n number is found");
    else
      printf("\n number not found");
}

void deletbeg()
{
     struct node *t;
     t = head;
     head = head->next;
     t->next = NULL;
     free(t);
}

void deletend()
{
     struct node *t, *prv;
     t = head;
     prv = head;
     while(t->next != NULL)
     {
          prv = t;
          t = t->next;
     }
     prv->next = NULL;
     free(t);
}

void deletmid()
{
     struct node *t, *prv;
     t = prv = head;
     int pos;
     printf("\n enter the node data to delete =");
     scanf("%d",&pos);
     while(t->data != pos)
     {
          prv = t;
          t = t->next;
     }
     prv->next = t->next;
     t->next = NULL;
     free(t);
}

int main()
{
    create();
    display();
    deletbeg();
    display();
    deletend();
    display();
    deletmid();
    display();
    deletend();
    display();
    return 0;

}