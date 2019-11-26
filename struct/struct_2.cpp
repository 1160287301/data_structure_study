//
// Created by h on 2019/11/26.
//
#include <stdio.h>

struct Student {
    int sid;
    char name[200];
    int age;
};

int main(void) {
    struct Student st = {1000, "黄", 20};
    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    struct Student *p = &st;
    // p->age等价于(*p).age 等价于 st.age
    p->age = 21;
    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    return 0;
}