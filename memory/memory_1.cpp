//
// Created by H on 2019/11/26.
//

# include <stdio.h>
#include <cstdlib>

void f(int *q)
{
    int j=3;
    q=&j;
    int jj;
}

int main(void) {
    // 不用 return 怎么获取f函数里面的3

    int *p;
    f(p);
    printf("%d",*p);
    
    return 0;
}


