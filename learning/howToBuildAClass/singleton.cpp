//
// Created by andy on 6/19/18.
//
#include <iostream>

using namespace std;

class A {
public:
    static A &getInstance();

    void setup() {
        printf("set up\n");
    }

private:
    A();

    A(const A &thes) {}

};



int main() {
    A::getInstance().setup();
}