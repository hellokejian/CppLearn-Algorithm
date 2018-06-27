//
// Created by andy on 18-5-28.
//
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:

};

void test() {
    struct test {
        int a;
        char c1;
        float f1;
//        union uu{
//            char cc[5];
//            int i2[2];
//        }ua;
    } myaa;

    union uu {
        char cc[5];
        int i2[2];
    } ua;
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(ua));
}

int main() {
    Solution *s = new Solution();
    test();
    return 0;
}
