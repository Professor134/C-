#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *R=NULL;
struct node *F=NULL;

void enqueue()
{
    int val;
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Value:");
    scanf("%d",&val);
    new->data = val;
    new->next = NULL;
    if ( F == NULL)
    {
        F = new;
        R = new;
    }
    else
    {
        R->next = new;
        R=new;
    }
    printf("\n%d inserted\n",val);
}

void dequeue()
{
    struct node *p;
    if(F == NULL)
    {
        printf("\nQueue UnderFlow");
    }
    else
    {
        if(F->next == NULL)
        {
            F=NULL;
            R=NULL;
        }
        p=F;
        printf("\n%d deleted..",p->data);
        F=F->next;
        free(p);

    }

}

void display() {
    struct node *t;
    t=F;
    printf("\n");
    while(t != NULL) {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("NULL");
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    display();
    enqueue();
    enqueue();
    enqueue();display();
    return 0;
}