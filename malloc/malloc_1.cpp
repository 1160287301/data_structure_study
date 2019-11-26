//
// Created by h on 2019/11/26.
//
# include <stdio.h>
#include <cstdlib>


int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int len;
    printf("输出数组长度:len=");
    scanf("%d", &len);  // 往len的地址里写数据
    int *parr = (int *) malloc(sizeof(int) * len);
    *parr = 4;  //类似于a[0]=4;
    parr[1] = 10; //类似于a[1]=10;

    for (int i = 0; i < len; ++i)
        scanf("%d", &parr[i]);

    for (int i = 0; i < len; ++i)
        printf("%d\n", *(parr + i));

    free(parr);  //把parr所代表的的动态分配的20个字节的内存释放

    return 0;
}