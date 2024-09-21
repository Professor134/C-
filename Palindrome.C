void main() //normal palindrome
{
    int d, no, r=0, x=0;
    printf("enter no");
    scanf("%d",&no);
    x=no;
    while(no!=0)
    {
        d=no%10;
        r=r*10+d;
        no=no/10;
    }

    if(x==r)
    {
        printf("p");
    }
    else
    {
        printf("not palllindrom");
    }
}