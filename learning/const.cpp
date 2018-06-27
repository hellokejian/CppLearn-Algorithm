//
// Created by andy on 6/6/18.
//
#include <iostream>

using namespace std;

void test1() {
    int a = 5;
    int b = 6;
    int const *p1 = &a;
    p1 = &b;
    cout << *p1 << endl;
    const int *p2 = &b;
    p2 = &a;
    cout << *p2 << endl;
//    *p1 = 10; // illeagl
//    *p2 = 10; // illeagl
}

void test2() {
    int a = 10;
    int b = 20;
    int *const p = &a;
//    p = &b; // illegal
    *p = 1000;
    cout << *p << endl;

    const int *const p2 = &a;
//    p2 = &b; // illegal
//    *p2 = 1000; // illegal
    const int const *p3 = &b;
    p3 = &a; // legal
//    *p3 = 1000; // illegal
}

int main() {
//    test1();
    test2();
}