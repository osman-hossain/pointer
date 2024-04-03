#include<stdio.h>
void modifyvalue(int *ptr)
{
    *ptr=20;
}
int main()
{
    int a = 10;

    printf("Before Modification : %d\n\n",a);

    modifyvalue(&a);

    printf("After Modification : %d\n",a);

    return 0;
}