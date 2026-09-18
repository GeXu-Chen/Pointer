#include <stdio.h>
#include <string.h>

// //结构体
// struct Friend
// {
//     char name[100];
//     int age;
//     double height;
// };

// //取代名就不用写大名了
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
//     strcpy(gf1.name, "???"); 

//     struct Friend gf2 = {"????",1000,172};

//     GF gf3 ={"?????",27};

//     struct Friend arr[2]={gf1,gf2};
//     for (int i=0;i<2;i++)
//     {
//         printf("??????%s ,????:%d ,????:%1f\n",arr[i].name,arr[i].age,arr[i].height);
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
    printf("姓名%s ,年龄%d\n",g1.name,g1.age);

    WriteGF(&g1);

    printf("函数后信息%s ,%d",g1.name,g1.age);

    return 0;
}

void WriteGF (GF* st)
{
    printf("姓名\n");
    scanf("%s",(*st).name);
    printf("年龄\n");
    scanf("%d",&((*st).age));
    printf("函数内信息%s ,%d\n",(*st).name,(*st).age);
}