//
// Created by h on 2019/11/29.
//

# include <stdio.h>
#include <cstdlib>
#include <cstring>

typedef int zhangshan; //为 int 再重新取一个名字,zhanghshan 等价于 int
typedef int * pint;
typedef struct Student {
    int sid;
    char name[20];
    char sex[20];
} st;


int main(void) {

    int i = 10;
    zhangshan j = 20;
    printf("%d, %d", i, j);

    st * pst;
//    st * pst = (st *) malloc(sizeof(st));
    strcpy(pst ->name, "张");
    pst->sid = 18;
    strcpy(pst->sex, "男");

    int x = 10;
    pint pi = &x;
    return 0;
}
