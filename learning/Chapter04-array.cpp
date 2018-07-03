#include "stdio.h"
#include <cstring>
#include <iostream>
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
    printf("&pv %p\n", &pv);
    printf("*pv %d\n", *pv);
    printf("*(pv + 1) %d\n", *(pv + 1));
    printf("*(++pv) %d\n", *++pv); // ++优先级高于*
    printf("*(vector + 1) %d\n", *(vector + 1));
    // printf("*(vector + 1) %d\n", *(vector++)); // lvalue required as increment operand

    // 000000000062fe00 = vector = &vector = &vector[0] = pv = pv + 0
    printf("======================================================\n");
}

void differenceBetweenArrayAndPointer()
{
    int vector[5] = {1, 2, 3, 4, 5};
    int *pv = vector;
    printf("*(vector + 3)=%d\n", *(vector + 3));

    // sizeof
    printf("sizeof(vector)=%zu\n", sizeof(vector));
    printf("sizeof(pv)=%zu\n", sizeof(pv));

    // ++
    pv++;
    // vector++; // illegal
    printf("======================================================\n");
}

void useMallocToCreateAnArray()
{
    char *pv = (char *)malloc(5 * sizeof(char));
    for (int i = 0; i < 5; i++)
    {
        pv[i] = i * i;
        *(pv + i) += i;
    }
    delete[] pv;
    printf("useMallocToCreateAnArray\n");
    printf("======================================================\n");
}

void useReallocToAdjustArrayLength()
{
    size_t a = 10;
    char *char_p = (char *)malloc(a);
    printf("%zu\n", sizeof(char_p));
    printf("======================================================\n");
}

// char *getLine(void)
// {
//     int character = fgetc(stdin);
//     std::cout << character << '\n';
//     size_t sizeIncrement = 10;
//     char *buffer = (char *)malloc(sizeIncrement);
//     char *currentPosition = buffer;
//     size_t maxLength = sizeIncrement;
//     size_t length = 0;
//     while (1)
//     {
//         char c = fgetc(stdin);
//         if (c == '\n')
//         {
//             break;
//         }
//         if (++length >= maxLength)
//         {
//             char *newBuffer = realloc(buffer, maxLength += sizeIncrement);
//             if (newBuffer == NULL)
//             {
//                 free(buffer);
//                 return 0;
//             }
//             currentPosition = newBuffer + (currentPosition - buffer);
//             buffer = newBuffer;
//         }
//         *currentPosition++ = c;
//     }
//     *currentPosition = '\0';
//     return buffer;
// }

char *getLine02(void)
{
    // int character = fgetc(stdin);
    // std::cout << character << '\n';
    size_t sizeIncrement = 10;
    char *buffer = (char *)malloc(sizeIncrement);
    char *currentPosition = buffer;
    size_t maxLength = sizeIncrement;
    size_t length = 0;
    char c;

    if (currentPosition == NULL)
    {
        return NULL;
    }

    while (1)
    {
        c = fgetc(stdin);
        if (c == '\n')
        {
            break;
        }
        if (++length >= maxLength)
        {
            realloc(buffer, maxLength += sizeIncrement);
            if (buffer == NULL)
            {
                free(buffer);
                return 0;
            }
            // currentPosition = newBuffer + (currentPosition - buffer);
            // buffer = newBuffer;
        }
        *currentPosition++ = c;
    }
    *currentPosition = '\0';
    return buffer;
}
void testGetLine()
{
    // char *result =
    std::cout << getLine02() << '\n';
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
    differenceBetweenArrayAndPointer();
    useMallocToCreateAnArray();
    useReallocToAdjustArrayLength();
    // getLine();
    testGetLine();
    system("pause");
    return 0;
}
