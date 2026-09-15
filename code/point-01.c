#include <stdio.h>

void swap(int* x,int* y);
int* method();

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
int* p=method();
printf("%d",*p);
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

int* method()
{
    static int a=10;  //加了static使得这个参数a能一直保留到所有程序结束，不然在主函数里当调用完method()这个函数后函数里变量将消失使得无法printf出来
    return &a;
}

