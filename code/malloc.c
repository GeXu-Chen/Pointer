//malloc    申请连续空间                       只有存储了数据才会真正分配空间
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
        //printf("%d\n",p[i]);
    }

    int* pp = realloc(p,20 * sizeof(int));       //remalloc建立了一个空间，用了之后就不用释放原来那个空间了
    for (int n=10;n<20;n++)
    {
        pp[n]=(n+1)*10;
    }

    for (int z=0;z<20;z++)
    {       
        printf("%d\n",pp[z]);
    }

    //当申请的空间不用了就释放空间
    free(pp);

    return 0;
}
