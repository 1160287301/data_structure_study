# include <stdio.h>

int main(void){
    double *p;
    double x = 66.6;
    p = &x;
    printf("%d\n", *p);

    double arr[3] = {1.1, 2.2, 3.3};
    double *q;
    q = &arr[0];
    printf("%p\n", q);

    q = &arr[1];
    printf("%p\n", q);  // 地址值相差 8, 指针变量长度都一样

    return 0;
}



