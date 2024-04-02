<!--a programme about pointer-->

P~~o~~_i_ __n__`ter`

---
- [x]
- [x]
- [x]

### component

<ol style="I">
<li>
<li>
</ol>

```c
#include<stdio.h>
int main()
{
    int x=5;

    int *ptr;

    ptr= &x;

    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&ptr = %d\n",&ptr);

    getch();
}
```  
<image src="./images/initial.png" width="500" title="initial"/>  

### basic practice

```c
#include<stdio.h>
int main()
{
    int x=5,y=6,z=7;
    int *ptr;

    ptr = &x;
    printf("x = %d\n\n",*ptr);

    ptr = &y;
    printf("y = %d\n\n",*ptr);

    ptr = &z;
    printf("z = %d\n\n",*ptr);

    getchar()
}
```  
<image src="./images/basic.png" width="500" title="basic"/>  

### similar

```c
#include<stdio.h>
int main()
{
    int x=4,y=5,z=6;

    int *a,*b,*c;

    a=&x;
    b=&y;
    c=&z;

    printf("x = %d\n\n",*a);
    printf("y = %d\n\n",*b);
    printf("z = %d\n\n",*z);

    getchar();
}
```
![basicsimilar](./images/basic.png)  

### adding two numbers using pointer

```c
#include<stdio.h>
int main()
{
    int x=5, y=6;

    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    int sum = *ptr1+*ptr2;

    printf("Sum = %d\n\n",sum);

    getchar();
}
```  
<image src="./images/sum.png" width="500" height="100" border="5" alt="sum is not showing" vspace="10" hspace="10" align="top"/>  

### swap the value

```c
#include<stdio.h>
int main()
{
    int x=5, y=10,temp;
    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("x = %d\n\n",x);
    printf("y = %d\n\n",y);

    printf("*ptr1 = %d\n",*ptr1);
    printf("*ptr2 = %d\n",*ptr2);

    getch();
}
```  
<image src="./images/swap.png" width="500" title="swap"/>  

### swaping using pointer & function

```c
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=5,y=10;
    printf("before swapping x = %d & y = %d",x,y);
    swap(&x,&y);
    printf("after swapping x = %d & y = %d",x,y);
}
```  
<image src="./images/swapfunction.png" width="500" title="swapfunction"/>  

### pointer with array

```c
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *ptr;
    ptr=&a[0];
    printf("ptr 1000+0*4 = %d\n",*(ptr+0));// *1000+0*4
    printf("ptr 1000+1*4 = %d\n",*(ptr+1));// *1000+1*4
    printf("ptr 1000+2*4 = %d\n",*(ptr+2));// *1000+2*4
    printf("ptr 1000+3*4 = %d\n",*(ptr+3));// *1000+3*4
    printf("ptr 1000+4*4 = %d\n\n",*(ptr+4));// *1000+4*4

    ptr=&a[3];

    printf("ptr 4 = %d\n",*ptr); // 1000+3*4
    printf("ptr 5 = %d\n\n",*(ptr+1));// 1012+1*4

    ptr=&a[0];

    for(int i=0; i<5; i++)
    {
        printf("pointer = %d\n",*ptr);
        ptr++; 
        /* 
        1000+0*4=1000,
        1000+1*4=1004,
        1004+1*4=1008,
        1008+1*4=1012,
        1012+1*4=1016.
        */
    }
    getch();
}
```  
<image src="./images/pointerarray.png" width="500" title="pointerwitharray"/>  
