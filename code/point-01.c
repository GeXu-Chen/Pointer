#include <stdio.h>

void swap(int* x,int* y);

int main()
{
//任务1：读取改变值
// int a = 10;
// int* p = &a;
// printf("%d\n",*p);
// return 0;
// //11

//作用1：在该函数外调换2个数的值
int a=10;
int b=20;
printf("%d %d\n",a,b);
swap(&a,&b);
printf("%d %d",a,b);
return 0;
}

//任务2
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

