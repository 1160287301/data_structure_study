//
// Created by h on 2019/11/26.
//
#include <stdio.h>
#include <string.h>
struct Student{
    int sid;
    char name[200];
    int age;
};
/* 分号不能少
 * 结构体变量不能加减乘除,但可以相互赋值
 *
 * */

int main(void) {
    struct Student st = {1000, "黄", 20};
    printf("%d   %s   %d\n", st.sid, st.name, st.age);

    st.age = 21;
    //st.name = "sss"  // error
    strcpy(st.name, "lisi");
    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    return 0;
}