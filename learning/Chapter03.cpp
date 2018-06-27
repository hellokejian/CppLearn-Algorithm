//
// Created by andy on 6/16/18.
//
#include <iostream>
#include <vector>

using namespace std;

//int *allocateArray01(int size, int value) {
//    int vector[size];
//    for (int i = 0; i < size; ++i) {
//        vector[i] = value;
//    }
//    return vector;
//}

int *allocateArray02(int size, int value) {
    auto *vector = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        vector[i] = value;
    }
    return vector;
}

int *allocateArray03(int size, int value) {
//    int vector[size];
//    for (int i = 0; i < size; ++i) {
//        vector[i] = value;
//    }
//    return vector;
}

void allocateArray04(int **vectors, int size, int value) {
    *vectors = (int *) malloc(size * sizeof(int));
    if (*vectors != nullptr) {
        for (int i = 0; i < size; ++i) {
            *(*vectors + i) = value;
        }
    }
}

void test4allocateArray04() {
    int *vectors = nullptr;
    allocateArray04(&vectors, 10, 5);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", *(vectors + i));
    }
    printf("\n");
}

void saferFree(void **pp) {
    if (pp != nullptr && *pp != nullptr) {
        free(*pp);
        *pp = nullptr;
    }
}

#define saferFree(p) saferFree((void**)&(p))

int test4saferFree() {
//     wrong way
//    int a = 5;
//    int *p = &a;
//    int **pp = &p;
//    saferFree(pp); //(void**)&p
//    printf("delete success\n");
//    the right way
    auto *pi = (int *) malloc(sizeof(int));
    *pi = 10;
    printf("%p\n", pi);
//    saferFree((void **)&pi);
    saferFree(pi);
    printf("%p\n", pi);
    saferFree(pi);
    return (EXIT_SUCCESS);
}

int main() {
//    int *vector = allocateArray03(10, 2);
//    for (int i = 0; i < 10; ++i) {
//        cout << vector[i] << endl;
//    }
    printf("==============\n");
    test4allocateArray04();

    test4saferFree();
}
