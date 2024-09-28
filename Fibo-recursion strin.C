 #include<stdio.h>
int fibo(int no)
{
    if(no==0)
        return 0;
    else if(no==1)
        return 1;
    else
        return(fibo(no-1)+fibo(no-2));
}

void main()
{
    int i,term, val;
    printf("enter num");
    scanf("%d",&term);
    for(i=0; i<term; i++)
    {
        val=fibo(i);
        printf("%d",val);
    }
}