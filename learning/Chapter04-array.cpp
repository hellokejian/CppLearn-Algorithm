#include <iostream>
// #include "cstring"
#include <cstring>
using namespace std;

void test01()
{
    // illustrate how to use array
    int vector[5]; //=  {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(vector) / sizeof(int));
    printf("======================================================\n");
}

void test02()
{
    char p[] = "hello";
    // char *pp = (char *)malloc(6 * sizeof(int));
    // char *pp = "hello";
    // printf("%zu\n", sizeof(pp));
    // printf("%zu\n", strlen(pp));
    // p++;
    printf("%s\n", p + 1);
    printf("======================================================\n");
}
void test03()
{
    int vector[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        printf("&vector[%d] : %p sizeof(vector[%d]) : %d\n", i, &vector[i], i, sizeof(vector[i]));
    }

    // printf("%d\n", 1);
}
void test04()
{
    int vector[5];
    int *pv = vector;
    printf("======================================================\n");
}

void test()
{
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    test03();
    test04();
    return 0;
}
