#include<stdio.h>
int square(int num)
{
    return num*num;
}

int cube(int num)
{
    return num*num*num;
}

int calc(int num,int (*op)(int))
{
    op(num);
}


int main()
{
    printf("sqr: %d\n", calc(4,&square));
    printf("cube: %d", calc(4,&cube));
}