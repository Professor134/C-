#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ptr=0,nm;

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
    printf("|''''''''''''''''''''''''''''|\n");
    printf("|''          ''     ''       |\n");
    printf("|⚽                          |\n");
    printf("|''          ''            ''|\n");
    printf("|                            |\n");
    printf("|     ''     ''            ''|\n");
    printf("|''''''''''''''''''''''''''''|\n");
}
int step1()
{
    printf("|''''''''''''''''''''''''''''|\n");
    printf("|''          ''            ''|\n");
    printf("|     ⚽                     |\n");
    printf("|     ''     ''            ''|\n");
    printf("|                            |\n");
    printf("|''          ''     ''       |\n");
    printf("|''''''''''''''''''''''''''''|\n");
}
int step2()
    {
        printf("|''''''''''''''''''''''''''''|\n");
        printf("|     ''     ''              |\n");
        printf("|            ⚽              |\n");
        printf("|''          ''     ''       |\n");
        printf("|                            |\n");
        printf("|''   ''            ''     ''|\n");
        printf("|''''''''''''''''''''''''''''|\n");
    }
    int step3()
{
    printf("|''''''''''''''''''''''''''''|\n");
    printf("|''          ''     ''       |\n");
    printf("|                   ⚽       |\n");
    printf("|            ''     ''     ''|\n");
    printf("|                            |\n");
    printf("|     ''     ''            ''|\n");
    printf("|''''''''''''''''''''''''''''|\n");
}

int step4()
{
    printf("|''''''''''''''''''''''''''''|\n");
    printf("|     ''     ''              |\n");
    printf("|                          ⚽|\n");
    printf("|     ''     ''            ''|\n");
    printf("|                            |\n");
    printf("|''          ''     ''       |\n");
    printf("|''''''''''''''''''''''''''''|\n");
}


void instructions()
{
    printf("\n_____MOVE THE POINTER_____\n");
    printf("\n Instructions=");
    printf("\n Enter 0 to move left");
    printf("\n Enter 1 to move right");
    printf("\n Enter 2 to double move left");
    printf("\n Enter 3 to double move left");
    printf("\n Enter 616 to end the game");
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
        printf("|''''''''''''''''''''''''''''|\n");
        printf("|                            |\n");
        printf("|⚽                          |\n");
        printf("|''          ''            ''|\n");
        printf("|                            |\n");
        printf("|     ''     ''            ''|\n");
        printf("|''''''''''''''''''''''''''''|\n");

        while(1)
        {
            printf(":");
            choise = _getch();
            ch= move(choise);
            switch(ch)
            {
            case 0:
                clrscr();
                step0();
                break;
            case 1:
                clrscr();
                step1();
                break;
            case 2:
                clrscr();
                step2();
                break;
            case 3:
                clrscr();
                step3();
                break;
            case 4:
                clrscr();
                step4();
                break;    
            case 5:    
                 exit(1);
            }
        } 
        return 0;
    }
}