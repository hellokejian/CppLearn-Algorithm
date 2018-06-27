//
// Created by andy on 6/15/18.
//
#include <iostream>

using namespace std;
int main(){
    char *chunk;
    int i = 0;
    while (1) {
        if (i == 20) {
            break;
        }
        chunk = (char *) malloc(1000000);
        printf("allocating\n");
        ++i;
    }
}