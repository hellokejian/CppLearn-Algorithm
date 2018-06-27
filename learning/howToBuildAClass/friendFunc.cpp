//
// Created by andy on 6/18/18.
//
#include <iostream>
using namespace std;

class complex {
public:
    explicit complex(double r = 0, double i = 0) : re(r), im(i) {}

    double func(complex &params) {
        return params.re + params.im;
    }

    // the function of objects from the same class are friend function to each other
    // whick means they could acesss to the private data members
    void output(complex &params) {
        printf("%.1lf, %.2lf\n", params.re, params.im);
    }

private:
    double re, im;
};

int main() {
    complex c1, c2(3.0, 4.0);
    c1.func(c2);
    c1.output(c2);
    return 0;
}
