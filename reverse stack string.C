#include <stdio.h>
#include <conio.h>
int top=-1;
char s[20];
int size=20;
void push()
{
    char n[20];
    int i=0;
    if(top == size -1)
    {
        printf("\nStack Full");
    }
    else
    {
        printf("\nEnter String (MAX 20):");
        scanf("%s",n);
        while(n[i] != NULL)
        {
            top++;
            s[top]=n[i];
            i++;
        }
    }
}
void show()
{
    int i=top;
    while(s[i] != NULL)
    {
        printf("%c",s[i]);
        i--;
    }
}
int main()
{
    push();
    show();
    return 0;
}