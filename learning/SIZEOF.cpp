#include <iostream>
#include <cstring>
using namespace std;

class A
{
    // int a;
    // char b;
    typedef void (*a)(char, char);
    void fun(){};
    void fun2();
    enum
    {
        red,
        green,
        blue
    } colors;
};

void test()
{
    printf("%zu", sizeof(A));
}

void test2()
{
    char str1[] = "Hello";
    printf("%zu\n", sizeof(str1));
    printf("%zu\n", strlen(str1));
    char str2[5] = {'H', 'e', 'l', 'l', 'o'};
    printf("%zu\n", sizeof(str2));
    printf("%zu\n", strlen(str2));
    char str3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%zu\n", sizeof(str3));
    // string *p1 = "Hello";
    char *p1 = "Hello"; // ISO C++ forbids converting a string constant to 'char*'
    printf("%zu\n", sizeof(p1));
    char *p2[] = {"hello", "world"};
    printf("%zu\n", sizeof(p2));
    int n = 10;
    printf("%zu\n", sizeof(n));
    int *q = &n;
    printf("%zu\n", sizeof(q));
}

void fun1(char p[], int b)
{
    printf("%zu\n", sizeof(p)); // 数组在做为函数参数时均化为指针
};

void test3()
{
    char *p = (char *)malloc(100);
    printf("%zu\n", sizeof(p)); // (p是一个指针，大小为4)
    char a[10];
    int b = 10;
    fun1(a, b);
}

class B
{
  public:
    int a;
    char b;
};

class C : virtual B
{
    // int a;
    // char b;
};

void test4()
{
    printf("%zu\n", sizeof(B));
    printf("%zu\n", sizeof(C));
}

class D
{
  public:
    char c;
    virtual void fun1();
    virtual void fun2();
};

void test5()
{
    printf("%zu\n", sizeof(D));
}

int main(int argc, char const *argv[])
{
    // test();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}
