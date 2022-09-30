#include<stdio.h>
#define n 5
int i;
int main()
{
    char ch[]={};
    char ch2[]={};
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch[i]);
        ch2[i] = ch[i];
    }
    printf("%s",ch2);
}