//
// Created by andy on 6/17/18.
//
// chapter 3.3 pointer to function
#include <iostream>

using namespace std;
// how to declare a fun pointer
void (*f1)(double);      // 传入double，没有返回值
char (*f2)(char *);      // 传入char指针， 返回char
double *(*f3)(int, int); // 传递两个整数， 返回double指针

/*****************3.3.1 this time we declare func pointer*****************/
int square(int origin)
{
    return origin * origin;
}

int testPointer2Function()
{
    int (*fptr1)(int);

    //     fptr1 = &square; // can still work
    fptr1 = square;
    printf("the square of %d is %d\n", 5, fptr1(5));
}

void aBetterWayToUseFuncptr()
{
    typedef int (*funcptr)(int);
    funcptr fptr1;
    fptr1 = square;
    printf("the square of %d is %d\n", 5, fptr1(5));
}

int *origin01(int *origin)
{
    return origin;
}

// this time we use things different from above
// we use function that use pointer as input, return a int pointer
void aBetterWayToUseFuncptr2()
{
    // different, we use int*
    typedef int *(*funcptr)(int *);
    funcptr fptr;
    fptr = origin01;
    int a = 5;
    int *b = &a;
    //     function returns a pointer, so we use * to slove the reference
    printf("the result of origin1 is %d\n", *fptr(b));
}

/*****************3.3.2this time we use func pointer as a parameter*****************/
string sayHello(string *str)
{
    return "Hello:" + *str;
}

string sayGoodbye(string *str)
{
    return "GoodBye:" + *str;
}

typedef string (*funcptr02)(string *);

string chooseAWayYouWantToExpress(funcptr02 fptr, string *str)
{
    return fptr(str);
}

void test4FuncPointerParamter()
{
    funcptr02 fptr;
    // fptr = sayGoodbye;
    string a = "kejian";
    string *str = &a;
    cout << chooseAWayYouWantToExpress(sayHello, str) << endl;
    cout << chooseAWayYouWantToExpress(sayGoodbye, str) << endl;
}

/*****************3.3.4this time we return a func pointer*****************/
typedef string (*funcptr03)(string *);

funcptr03 returnAFUnctionPointer(char code)
{
    switch (code)
    {
    case 'H':
        return sayHello;
    case 'G':
        return sayGoodbye;
    default:
        return sayHello;
    }
}

void testReturningFuncPointer()
{
    funcptr03 fptr = returnAFUnctionPointer('G');
    string str = "kejian";
    cout << fptr(&str) << endl;
}
/*****************3.3.5 use the array of fptr*****************/

void funptr_array()
{
    typedef int (*operation)(int, int);
    operation operations[128] = {NULL};
    int (*operations2[128])(int, int) = {NULL};
}

int main()
{
    testPointer2Function();
    printf("=================\n");
    aBetterWayToUseFuncptr();
    printf("=================\n");
    aBetterWayToUseFuncptr2();
    printf("=================\n");
    test4FuncPointerParamter();
    printf("=================\n");
    testReturningFuncPointer();
    printf("=================\n");
    funptr_array();
    printf("=================\n");
}