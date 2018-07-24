//
// Created by andy on 18-5-29.
//
//#ifndef __SIZE_T
//#define __SIZE_T
//typedef unsigned int size_t;
//#endif

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printPointerVariable()
{
    string name = "kejian";
    string *p1 = &name;
    cout << &name << " " << name << endl;
    cout << &p1 << " " << p1 << " " << *p1 << endl;
    printf("p1 with %%p : %p\n", p1);
    // printf("p1 with %%x : %x\n", p1);
    printf("%p\n", (void *)p1);
    //    p1 = 0;
    p1 = nullptr;
}

void pointerForFunction()
{
    int *p;
    p = nullptr;
}

void voidPointer()
{
    int num = 100;
    int *pi = &num;
    printf("value of pi : %p\n", pi);
    void *pv = pi;
    pi = (int *)pv;
    printf("value of pi : %p\n", pi);
}

// sizeof, size_t
void sizeOfTest()
{
    printf("sizeof(void *) = %zu\n", sizeof(void *));
    // printf("sizeof(void) = %zu\n", sizeof(void));
    printf("sizeof(char *) = %zu\n", sizeof(char *));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(int *) = %zu\n", sizeof(int *));
    printf("sizeof(int) = %zu\n", sizeof(int));
}

// 存放指针地址
// void intptr_t_test()
// {
//     // intptr_t can be used to store the pointer
//     int num;
//     intptr_t pi = &num;
// }

// 存放指针差值
// void ptrdiff_t_test()
// {
//     int vector[4] = {1, 2, 3, 4};
//     int *p1 = vector;
//     int *p2 = p1 + 2;
// }

int main()
{
    printPointerVariable();
    printf("=======================================\n");
    voidPointer();
    printf("=======================================\n");
    sizeOfTest();
    printf("=======================================\n");
    return 0;
}

void pointer2()
{
    int *p1 = nullptr;
    if (p1)
    {
        cout << "boy next door\n";
    }
    else
    {
        cout << "HOOOOOOOOOOP\n";
    }
    size_t size1 = sizeof(p1);
    printf("%zu\n", size1);

    string name = "kejian";
    size_t size2 = name.length();
    printf("%zu\n", size2);
    //    printf("%u\n", size2); // not recommended
}

void pointer3()
{
    // in some cases, we can not use %zu as display format;
    size_t size1 = -5;
    printf("%zu\n", size1);
    printf("%zu\n", size1);

    size_t size2 = 5;
    printf("%zu\n", size2);
    printf("%zu\n", size2);

    cout << "=====================\n";

    printf("%zu\n", sizeof(void *));
    printf("%zu\n", sizeof(char *));
    printf("%zu\n", sizeof(int *));
    // printf("%d\n", sizeof(void *));
}

void pointer4()
{
    int num = 100;
    //    int *pi = &num;
    //    intptr_t *t1 = &num;
    string name = "hello world";
    char *c1 = &name[0];
    char *c2 = &name[1];
    cout << c2 - c1 << endl;
    cout << c2 << endl;
    //    intptr_t *c3 = &name[0];

    cout << "-----------------------\n";
    int nums[5] = {1, 1, 1, 1, 1};
    int *num1 = &nums[0];
    int *num2 = &nums[2];
    cout << num2 - num1 << endl;
    cout << num1 << endl;
}

void pointer5()
{
    short s;
    short *ps = &s;
    cout << ps << endl;
    ps += 1;
    cout << ps << endl;

    cout << "---------------\n";
    char c = 'c';
    char *pc = &c;
    printf("%p\n", pc);
    pc += 4;
    printf("%p\n", pc);
    cout << "---------------\n";

    int temp = 10000;
    void *pv = &temp;
    printf("%p\n", pv);
    size_t sv = sizeof(temp);
    printf("%zu\n", sv);
    // pv += 4;
    printf("%p\n", pv);
}

void pointer6()
{
    int *pi; // = (int*)malloc(5);
    *pi = 10;
    cout << *pi << endl;
    free(pi);
}
