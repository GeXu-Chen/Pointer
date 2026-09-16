#include <stdio.h>

void swap(int* x,int* y);
int* method();
void getMaxAndMin(int arr[],int len,int* max,int* min);

// int main()
// {
// //任务1：读取改变值
// // int a = 10;
// // int* p = &a;
// // printf("%d\n",*p);
// // return 0;
// // //11

// //作用1：在该函数外调换2个数的值
// int a=10;
// int b=20;
// printf("%d %d\n",a,b);
// swap(&a,&b);
// printf("%d %d",a,b);
// int* p=method();
// printf("%d",*p);
// return 0;
// }

// //任务2
// void swap(int* x,int* y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int* method()
// {
//     static int a=10;  //加了static使得这个参数a能一直保留到所有程序结束，不然在主函数里当调用完method()这个函数后函数里变量将消失使得无法printf出来
//     return &a;
// }

//作用2：函数返多个值
int main()
{
    int arr[]={1,3,2,5,4,7,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=1;
    int min=0;
    getMaxAndMin(arr,len,&max,&min);
    printf("%d %d",max,min);
    return 0;
}

void getMaxAndMin(int arr[],int len,int* max,int* min)
{
    *max =arr[0];
    for (int i=1;i<len;i++)
        {
            if (arr[i]>*max)
            {
                *max=arr[i];
            }
        }

    *min =arr[0];
    for (int i=1;i<len;i++)
        {
            if (arr[i]<*min)
            {
                *min=arr[i];
            }
        }
}