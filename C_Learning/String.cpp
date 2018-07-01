//
// Created by andy on 6/18/18.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
class complex {
public:
    explicit complex(T r = 0, T i = 0) : re(r), im(i) {}

    friend complex &__doapl(complex<T> *ths, const complex &);

    complex &operator+=(const complex &);

private:
    T re, im;
};

/********************implementation of the class*******************/
inline complex &
__doapl(complex *ths, const complex &add) {
    ths->re += add.re;
    ths->im += add.im;
    return *ths;
}

inline complex &
complex::operator+=(const complex &add) {
    return __doapl(this, add);
}

int main() {
    complex<double> c1(1.4, 2.3);
}