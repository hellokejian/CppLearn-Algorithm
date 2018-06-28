#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getmemory(char *&p)
{
    *p = (char *)malloc(100);
    memset(*p, '\0', sizeof(p[0]) * 100);
}
void test(void)
{
    char *str = NULL;
    getmemory(&str);
    strcpy(str,"hello, world");
    printf("%s\n", str);
}

int main()
{
    test();
    printf("hello, world!\n");
}