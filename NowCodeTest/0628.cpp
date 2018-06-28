#include <cstring>
#include <iostream>

void getmemory01(char *&p)
{
    p = (char *)malloc(100);
    memset(p, '\0', sizeof(p[0]) * 100);
}

void test01()
{
    char *str = NULL;
    getmemory01(str);
    strcpy(str, "hello, world");
    printf("%s\n", str);
}
 
void getmemory02(char **p)
{
    *p = (char *)malloc(100);
    // p = new char[100];
    memset(*p, '\0', sizeof(*p[0]) * 100);
}
void test02()
{
    char *str = NULL;
    getmemory02(&str);
    strcpy(str, "hello, world");
    printf("%s\n", str);
    // return 0;
}

int main(int argc, char *argv[])
{
    test01();
    test02();
    system("pause");
    return 0;
}