void main()
{
    int a[3][3], b[3][3],i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\n enter no");
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }

    printf("\n \ncopy b\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t %d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n \n transpose\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t %d",a[j][i]);
        }
        printf("\n");
    }

    printf("\n \n diagonal \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
                printf("\t %d",a[j][i]);
            else
                printf("\t   ");
        }
        printf("\n");
    }

    printf("\n \n low triangle\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>=j)
                printf("\t %d",a[j][i]);
            else
                printf("\t   ");
        }
        printf("\n");
    }

    printf("\n \n upper triangle\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<=j)
                printf("\t %d",a[j][i]);
            else
                printf("\t   ");
        }
        printf("\n");
    }
}