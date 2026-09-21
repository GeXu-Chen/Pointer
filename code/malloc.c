//malloc    申请连续空间
//calloc    申请空间+数据初始化
//reallo    修改空间大小
//free      释放空间
//都在stdlib.h里

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p =malloc(10 * sizeof(int));       //malloc返回的是 void* 类型，输入字节数量
    for (int i=0;i<10;i++)
    {
        *(p+i) = (i+1)*10;   //对于*(p+i)也可以写成p[i]效果一样 为p移动i个距离
        printf("%d\n",p[i]);
    }
    return 0;
}