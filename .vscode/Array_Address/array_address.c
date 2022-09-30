#include <stdio.h>
int i;
int main()
{
    int ary[5];
    printf("enter five number:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("value of array:");
    for( i=0; i<5; i++)
    {
        printf("\t%d",ary[i]);
    }

    /*one way of accesssing address*/

    printf("\nAddress of array:");
    for ( i=0; i < 5; i++)
    {
        printf("\t%p",(ary+i));
    }

    /* second way of accessing adress from array elements*/

    printf("\nAddress of array:");
    for(i=0;i<5;i++)
    {
        printf("\t%x",&ary[i]);
    }

}