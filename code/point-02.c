#include <stdio.h>

// void swap(void* a,void* b,int len);

// int main()
// {
//    //高级4：void类型指针-无法获得变量里数据以及参加指针加减/能接收任意类型的指针 使代码更有泛用性
//     int a = 10;
//     int b =20;
//     swap(&a,&b,4);
//     printf("%d %d\n",a,b);
//     return 0;
// }

// void swap(void* a,void* b,int len)
// {
//     char*p1 = a;  //用char*是因为char步长为一个字节-最小单元 /因为void不知道是什么类型不能像输入为int*一样直接全打包掉所有
//     char*p2 = b;  //用char*后才能读出来数值，这里p2代表着b的首地址
//     char temp=0;
//     for (int i=0;i<len;i++)
//     {
//         temp = *p1;
//         *p1=*p2;      //本质上换的是二进制数
//         *p2=temp;

//         p1++;
//         p2++;
//     }
// }


// int main()
// {
//     //高级5：二级指针修改一级指针的值
//     int a =10;
//     int b =20;
//     int* p=&a;
//     int** pp=&p;
//     *pp=&b;
//     printf("%p\n",&b);
//     printf("%p\n",p);       //想不明白了就画下关系图
//     printf("%d\n",**pp);

// }


int main()
{
    //高级6：数组指针
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(int);
    int* p=arr;   //获取数组首地址
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    return 0;
}
