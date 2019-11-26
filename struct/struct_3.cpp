//
// Created by h on 2019/11/26.
//
#include <stdio.h>
#include <string.h>
struct Student {
    int sid;
    char name[200];
    int age;
};

void f(struct Student * pst) {
    (*pst).age = 21;
    strcpy(pst->name, "鹏");
}

void g(struct Student st) {
    // 这种凡是耗内存,耗时间,不推荐
    printf("%d   %s   %d\n", st.sid, st.name, st.age);

}

int main(void) {
    struct Student st = {1000, "黄", 20};

    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    g(st);

    f(&st);

    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    g(st);

    return 0;
}