#include <iostream>
#include <string>

using namespace std;

int *p = (int *)malloc(sizeof(int));
static int *q = (int *)malloc(sizeof(int));
void mallocTest()
{
    // shows how to use malloc
    // malloc函数分配的地址空间会附带垃圾数据
    int *pi = (int *)malloc(sizeof(int));

    if (pi != NULL)
    {
        *pi = 5;
    }

    // free(pi);
    delete pi;
}

void callocTest()
{

    // shows how to use calloc
    // malloc函数分配的地址空间会自动清零
    int *pi = (int *)calloc(5, sizeof(int));
    // *pi = 5;
    // free(pi);
    printf("%d\n", *pi);
    delete pi;
}

void passingAddressOfConstants(const int *num1, int *num2)
{
    *num2 = *num1;
    num1 = num2;
}

void passingAddressOfConstantsTest()
{
    const int l1 = 100;
    int l2 = 20;
    passingAddressOfConstants(&l1, &l2);
}

int main(int argc, char const *argv[])
{
    mallocTest();
    printf("===================================\n");
    passingAddressOfConstantsTest();
    printf("=================================== \n");
    return 0;
    /* 你好啊 */
}
