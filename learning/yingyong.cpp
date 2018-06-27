//
// Created by andy on 18-5-24.
//
#include <iostream>

using namespace std;

void a() {
    int a = 3;
    int &b = a;
    cout << b << endl;
    a = 5;
    cout << b << endl;
}

typedef struct {
    int x;
    int y;
} point;

void b() {
    point p1;
    point &p2 = p1;
    p1.x = 20;
    p1.y = 10;
    cout << p2.x << endl << p2.y << endl;
    cout << "hello world" << endl;
}

void c() {
//    type *& pointername = pointer
    int a = 10;
    int *p = &a;
    int *&yy = p;
    *yy = 100;
    cout << a << endl;
}

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void d(){
    int x = 10;
    int y = 100;
    swap(&x, &y);
    cout << x << endl;
    cout << y << endl;
}

void swap2(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

void e(){
    int x = 1000;
    int y = 10000;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;
    swap2(x, y);
    cout << x << endl;
    cout << y << endl;
}

//int main() {
////    a();
////    b();
////    c();
////    d();
//    e();
//}

