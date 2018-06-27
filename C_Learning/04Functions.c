#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

//int main(void) {
//    void sort_test();
//
//    sort_test();
//}

void sort_test() {
    void sort(int array[], int array_num);

    int test_array[10] = { 12, 24, 33, 9, 19, 43, 2, 21, 37, 10 };
    sort(test_array, 10);
}
void sort(int array[], int array_num) {
    void swap(int *p, int *q);

    bool is_sorted = true;
    for (int index_out = 0; index_out < array_num - 1; index_out++) {
        for (int index_in = 0; index_in < array_num - 1 - index_out; index_in++ ) {
            if (array[index_in] > array[index_in + 1]){
                is_sorted = false;
                swap(&array[index_in], &array[index_in + 1]);
            }
        }
        if (is_sorted)
            break;
    }
    for (int index = 0; index < array_num; index ++) {
        printf("%d\n", array[index]);
    }
}
void swap(int *p, int *q) { // proved to be okay
    int temp = *p;
    *p = *q;
    *q = temp;
}
