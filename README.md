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

