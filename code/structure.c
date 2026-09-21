#include <stdio.h>
#include <string.h>

// //浠诲姟1锛氱粨鏋勪綋
// struct Friend
// {
//     char name[100];
//     int age;
//     double height;
// };

// //鍙栦唬鍚嶅氨涓嶇敤鍐欏ぇ鍚嶄簡
// typedef struct 
// {
//     char name[100];
//     int age;
// }GF;


// int main()
// {
//     struct Friend gf1;
//     gf1.age=20;
//     gf1.height=162;
//     strcpy(gf1.name, "鐪熺櫧"); 

//     struct Friend gf2 = {"绗﹀崕",1000,172};

//     GF gf3 ={"鑿插叓鍟炬瘮",27};

//     struct Friend arr[2]={gf1,gf2};
//     for (int i=0;i<2;i++)
//     {
//         printf("濮撳悕锛?%s ,骞撮緞:%d ,韬珮:%1f\n",arr[i].name,arr[i].age,arr[i].height);
//     }
//     return 0;
// }


// //浠诲姟2锛氱粨鏋勪綋鎸囬拡
// typedef struct 
// {
//     char name[100];
//     int age;
// }GF;

// void WriteGF (GF* st);

// int main()
// {
//     GF g1 ={"MiHoYo",10};
//     printf("濮撳悕%s ,骞撮緞%d\n",g1.name,g1.age);

//     WriteGF(&g1);

//     printf("鍑芥暟鍚庝俊鎭?%s ,%d",g1.name,g1.age);   //瑕佹兂璁╁閮ㄥ嚱鏁板奖鍝峬ain涓彉閲忓緱鐢ㄦ寚閽?

//     return 0;
// }

// void WriteGF (GF* st)
// {
//     printf("濮撳悕\n");
//     scanf("%s",(*st).name);
//     printf("骞撮緞\n");
//     scanf("%d",&((*st).age));
//     printf("鍑芥暟鍐呬俊鎭?%s ,%d\n",(*st).name,(*st).age);
// }


//结构体7：每个类型的首地址只能存在自己整数倍的内存里，结构体整体内存大小为其中类型最大的内存大小的整数倍
    //最后结构体内存大小为其中最大类型内存的整形
typedef struct 
{
    int z;
    double x;
    char c;
}stu;         //
int main()
{
    stu Stu;
    int a =10;
    printf("%d\n",&a);        //用十进制显示地址
    printf("%zu\n",sizeof(Stu));
    return 0;
}