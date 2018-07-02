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
    printf("======================================================\n");
}
void test04()
{
    int vector[5] = {1, 3, 5, 7, 9};
    int *pv = vector;
    printf("vector %p\n", vector);
    printf("&vector %p\n", &vector);
    printf("&vector[0] %p\n", &vector[0]);
    printf("pv %p\n", pv);
    printf("*pv %d\n", *pv);
    printf("*(pv + 1) %d\n", *(pv + 1));
    printf("*(++pv) %d\n", *(++pv));
    printf("*(vector + 1) %d\n", *(vector + 1));
    // printf("*(vector + 1) %d\n", *(vector++)); // lvalue required as increment operand
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
