//
// Created by andy on 6/6/18.
//
#include <iostream>
#include <string>
#include <cstring>
#include <malloc.h>

using namespace std;

void test1() {
    int *pi = (int *) malloc(sizeof(int));
    *pi = 5;
    printf("%d\n", *pi);
    free(pi);

    int *pi2;
    pi2 = (int *) malloc(sizeof(int));
    *pi2 = 1000;
    printf("%d\n", *pi2);
    free(pi2);

    free(pi2);
}

void test2() {
    char *pc = (char *) malloc(6);
    for (int i = 0; i < 8; i++) {
        pc[i] = 0;
    }
    for (int j = 0; j < 19; ++j) {
        printf("%d ", pc[j]);
    }
    printf("\n");
}

void test3() {
    char *chunk;
    int i = 0;
    while (1) {
        if (i == 20) {
            break;
        }
        chunk = (char *) malloc(1000000);
        printf("allocating\n");
        ++i;
    }
}

void test4(){
    char *name = (char*)malloc(strlen("Susan") + 1);
    strcpy(name, "Susan");
    while (*name != 0){
        printf("%c ", *name);
        name ++;
    }
    printf("\n");
}
int main() {
//    test1();
//    test2();
//    test3();
    test4();
    return 0;
}
