//
// Created by andy on 18-5-29.
//

#include <iostream>
#include <string>

using namespace std;

void pointer() {
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pn = nums;
    cout << "pn is:" << pn << endl;
    printf("size of nums is:%zu\n", sizeof(nums));
    printf("num of nums is:%zu\n", sizeof(nums) / sizeof(*pn));

    int *pp = &nums[3];
    ptrdiff_t diff = pp - pn;

    printf("the diff between pp and pn is:%ti\n", diff);
}

void pointer2() {
    char *names[] = {"andy", "kobe", "kejian", "Avail", "Lady GaGa"};
    char **male[2];
    char **female[2];
    male[0] = &names[0];
    male[1] = &names[2];
    printf("%s\n", *male[1]);
    female[0] = &names[3];
}

void pointer3() {
    // constant and pointer
    int num = 5;
    const int limit = 10;
    int *pi;
    const int *pci;

    pi = &num;
//    pi = &limit; // illegal

    pci = &num;
    pci = &limit; // although pci is declared as const, but we can change where it points to
    pci = &num; // the only thing we could not do is that we can not change value through *pci

    printf("%d\n", *pci); // we can use *pci to get the value

//    *pci = 17; // illegal

    num = 200; // we can change by original name only

}

void pointer4() {
    int num = 5;
    int can_change = 1000000000;
    int can_not_change = 100;
    const int *pci;
    int *const pic = &num;

    pci = &can_change;
//    pic = &can_not_change;

    *pic = can_change;
    printf("%d\n", can_change);
}

void pointer5() {
    int unchangeable = 10000;
    int temp = 10;
    const int *const slave = &unchangeable; // must be initiallized or compiler will complain about it
//    slave = &temp; // illegal
//    *slave = temp; // illegal
    printf("slave:%p\n", slave);
    printf("*slave:%d\n", *slave);
}

void pointer6() {
    const int unchangeable = 10000;
    int temp = 10;
    const int *const slave = &unchangeable;

    const int *const *slave_slave;
    slave_slave = &slave;

    printf("salve:%p\n", slave);
    printf("*slave:%d\n", *slave);
    printf("*slave_slave:%p\n", *slave_slave);
    printf("**slave_slave:%d\n", **slave_slave);
}

//int main() {
////    pointer();
////    pointer2();
////    pointer3();
////    pointer4();
////    pointer5();
////    pointer6();
//    return 0;
//}