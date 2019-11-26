//
// Created by H on 2019/11/26.
//

# include <stdio.h>
#include <cstdlib>

int f(int ** q) {
    int j = 20;
    int *parr = (int *) malloc(sizeof(int));
    *parr = j;
    q = &parr;
    return j;
}

int main(void) {
    int i = 10;

    // 获取f函数里面的变量
    int *p;
    i = f(&p);
//    printf("i=%d\n", i);
//    printf("p=%d", *p);


    return 0;
}


