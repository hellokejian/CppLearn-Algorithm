#include <cstring>
#include <iostream>
#include <string>

void anInterestingFact()
{
    printf("=======================================================\n");
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof('a'));
    printf("=======================================================\n");
}

void canWeAlterString()
{
    const char *tabHeader = "Kejian";
    // char *tabHeader = "Kejian"; // 会报错
    printf("%s\n", tabHeader);
    printf("=======================================================\n");
}
/****************************字符串初始化****************************/

void initializaingString01()
{
    /***********************初始化字符数组************************/
    char str[] = "kejian is handsome, please call him later";
    printf("str = %s\n", str);
    printf("sizeof(str) = %zu\n", sizeof(str));
    printf("strlen(str) = %zu\n", strlen(str));
    printf("sizeof(*str) = %zu\n", sizeof(*str));

    /*****************或者使用strcpy来初始化char数组******************/
    char hello[5];
    strcpy(hello, "hello");
    printf("%s\n", hello);

    printf("=======================================================\n");
}

void initializaingString02()
{
    /***********************初始化字char指针************************/
    char *str = (char *)malloc(strlen("hello world" + 1));
    strcpy(str, "hello world");
    printf("str : %s\n", str);
    printf("sizeof(\"hello world\") = %zu\n", sizeof("hello world"));
    printf("sizeof(str) = %zu\n", sizeof(str));
    printf("%zu\n", sizeof(*str));
    std::cout << *str << '\n';
    printf("=======================================================\n");
}

int main(int argc, char const *argv[])
{
    printf("fuck you and the world!\n");
    anInterestingFact();
    canWeAlterString();
    initializaingString01();
    initializaingString02();
    return 0;
}
