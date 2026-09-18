#include <stdio.h>
#include <string.h>

// //结构体
// struct Friend
// {
//     char name[100];
//     int age;
//     double height;
// };

// //起别名：大名可以不写了
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
//     strcpy(gf1.name, "真白"); 

//     struct Friend gf2 = {"符华",1000,172};

//     GF gf3 ={"菲八啾比",27};

//     struct Friend arr[2]={gf1,gf2};
//     for (int i=0;i<2;i++)
//     {
//         printf("姓名：%s ,年龄:%d ,身高:%1f\n",arr[i].name,arr[i].age,arr[i].height);
//     }
//     return 0;
// }


//结构体指针
typedef struct 
{
    char name[100];
    int age;
}GF;

void WriteGF (GF* st);

int main()
{
    GF g1 ={"MiHoYo",10};
    printf("名字：%s ,年龄：%d\n",g1.name,g1.age);

    WriteGF(&g1);

    printf("函数外的值：%s ,%d",g1.name,g1.age);

    return 0;
}

void WriteGF (GF* st)
{
    printf("输入姓名：\n");
    scanf("%s",(*st).name);
    printf("输入年龄：\n");
    scanf("%d",&((*st).age));
    printf("函数中的值%s ,%d\n",(*st).name,(*st).age);
}