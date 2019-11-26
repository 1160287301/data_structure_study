//
// Created by h on 2019/11/26.
//
#include <stdio.h>

void change(int * p) {
    // 改变变量的值
    *p = 1;
}

void change1(int ** pInt) {
    // 改变指针的值
    *pInt = (int *)0x7ffee2289a74;
    printf("*pInt = %d\n", *pInt);
}

int main(void) {
    int i = 0;
//    change(&i);
//    printf("i = %d\n", i);

    int * p = &i;
    printf("%p\n", p);
    change1(&p);
    printf("%p\n", p);


    return 0;
}
