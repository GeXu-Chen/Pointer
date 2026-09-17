#include <stdio.h>

void swap(void* a,void* b,int len);

int main()
{
    //高级4：void类型指针-无法获得变量里数据以及参加指针加减/能接收任意类型的指针 使代码更有代表性
    
    int a = 10;
    int b =20;
    swap(&a,&b,4);
    printf("%d %d\n",a,b);
    return 0;
}

void swap(void* a,void* b,int len)
{
    char*p1 = a;  //用char*是因为char步长为一个字节-最小单元
    char*p2 = b;  //用char*后才能读出来数值，这里p2代表着b的首地址
    char temp=0;
    for (int i=0;i<len;i++)
    {
        temp = *p1;
        *p1=*p2;      //本质上换的是二进制数
        *p2=temp;

        p1++;
        p2++;
    }
}