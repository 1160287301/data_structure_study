//
// Created by H on 2019/11/26.
//

# include <stdio.h>
#include <cstdlib>

struct Student {
    int sid;
    int age;
};

void showStudent(struct Student *pst) {
    printf("sid: %d, age: %d", pst->sid, pst->age);
}

struct Student *createStudent(void) {
    struct Student *p = (struct Student *) malloc(sizeof(struct Student));
    p->age = 18;
    p->sid = 1;
    return p;
}

int main(void) {

    struct Student *ps;

    ps = createStudent();
    showStudent(ps);

    free(ps);

    return 0;
}