//
// Created by andy on 6/18/18.
//
#include <iostream>

using namespace std;

class complex {
public:
    explicit complex(double r = 0, double i = 0) : re(r), im(i) {}

    double real() const {
        return re;
    }

    double imag() const {
        return im;
    }

    double func(complex &params) {
        return params.re + params.im;
    }

    friend complex &__doapl(complex *, const complex &);

    complex &operator+=(const complex &);

private:
    double re, im;
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

/***********************non-member function**************/
inline complex // remember not to use & for we returned a local variable
operator+(const complex &add1, const complex &add2) {
    complex c1(2, 5);
    return complex(add1.real() + add2.real(), add2.imag() + add2.imag());
}

inline complex
operator+(const complex &add, double real) {
    return complex(add.real() + real, add.imag());
}

inline complex
operator+(double real, const complex &add) {
    return complex(add.real() + real, add.imag());
}

inline complex
operator+(const complex param) {
    return param;
}

inline complex
operator-(const complex param) {
    return complex(-param.real(), -param.imag());
}

//#include <iostream
inline ostream&
operator <<(ostream& os, const complex param){
    return os << param.real() <<" " << param.imag() << endl;
}
inline
void print(const complex &param) {
    printf("%.2lf %.2lf\n", param.real(), param.imag());
}

int main() {
    complex c1(1, 2), c2(3, 4);
    c2 += c1;
    complex c3 = c1 + c2;
    print(c3);
    print(c3 + 10);
    print(100 + c3);
    print(c3);
    print(-c3);
    cout << c1;
}

