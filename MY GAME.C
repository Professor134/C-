#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ptr=0,nm, pre=0;

int move(int choise)
{

    if(choise=='g')
    {
        ptr++;
        return ptr%5;
    }
    else if(choise=='f')
    {
        ptr--;
        return ptr%5;
    }
    else if(choise=='h')
    {
        ptr=ptr+2;
        return ptr%5;
    }
    else if(choise=='d')
    {
        ptr=ptr-2;
        return ptr%5;
    }
    else if(choise=='z')
    {
        return 5;
    }
}

int step0()
{
    printf("|⚽                          |\n");
    printf("|''                          |\n");
    printf("|                            |\n");
}
int step1()
{
    printf("|     ⚽                     |\n");
    printf("|     ''                     |\n");
    printf("|                            |\n");
}
int step2()
{
    printf("|            ⚽              |\n");
    printf("|            ''              |\n");
    printf("|                            |\n");
}
int step3()
{
    printf("|                   ⚽       |\n");
    printf("|                   ''       |\n");
    printf("|                            |\n");
}

int step4()
{
    printf("|                          ⚽|\n");
    printf("|                          ''|\n");
    printf("|                            |\n");
}

int pro()
{
    printf("|                            |\n");
}

void instructions()
{
    printf("\n_____MOVE THE POINTER_____\n");
    printf("\n Instructions=");
    printf("\n Enter 'f' to move left");
    printf("\n Enter 'g' to move right");
    printf("\n Enter 'd' to double move left");
    printf("\n Enter 'h' to double move left");
    printf("\n Enter 'z' to end the game");
    printf("\n Enter 616 to start the game");
    printf("\n=");
    scanf("%d",&nm);
    clrscr();

}
int main()
{
    int i, ch;
    char choise;

    instructions();
    if(616==nm)
    {
        printf("point=%d \n",pre);
        printf("|''''''''''''''''''''''''''''|\n");
        printf("|                            |\n");
        printf("|⚽                          |\n");
        printf("|''          ''            ''|\n");

        while(1)
        {
            printf(":");
            choise = _getch();
            pre++;
            ch= move(choise);
            switch(ch)
            {
            case 0:
                clrscr();
                printf("point=%d \n",pre);
                printf("|''''''''''''''''''''''''''''|\n");
                for(i=0; i<pre; i++)
                {
                    pro();
                }
                step0();
                break;
            case 1:
                clrscr();
                printf("point=%d \n",pre);
                printf("|''''''''''''''''''''''''''''|\n");
                for(i=0; i<pre; i++)
                {
                    pro();
                }
                step1();
                break;
            case 2:
                clrscr();
                printf("point=%d \n",pre);
                printf("|''''''''''''''''''''''''''''|\n");
                for(i=0; i<pre; i++)
                {
                    pro();
                }
                step2();
                break;
            case 3:
                clrscr();
                printf("point=%d \n",pre);
                printf("|''''''''''''''''''''''''''''|\n");
                for(i=0; i<pre; i++)
                {
                    pro();
                }
                step3();
                break;
            case 4:
                clrscr();
                printf("point=%d \n",pre);
                printf("|''''''''''''''''''''''''''''|\n");
                for(i=0; i<pre; i++)
                {
                    pro();
                }
                step4();
                break;
            case 5:
                exit(1);
            }
        }
        return 0;
    }
}