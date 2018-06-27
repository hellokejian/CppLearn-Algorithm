//
// Created by andy on 6/12/18.
//
#include <iostream>
#include <string>
#include <cstring>
#include <malloc.h>

using namespace std;

void test01(){
    char *str1, *str2;
    str1 = (char*)malloc(8);
    strcpy(str1, "abcdefghijklmnop");
    str2 = (char*)realloc(str1, 8);
    printf("%zu, %zu ", sizeof(str1), strlen(str1));
    printf("%p %s\n", str1, str1);
    printf("%zu, %zu ", sizeof(str2), strlen(str2));
    printf("%p %s\n", str2, str2);
}

void newArray(int size){
    char *buffer[size];
    // free(buffer);  //munmap_chunk(): invalid pointer Aborted (core dumped)
}

void aBetterWayToUseFuncptr2(){
    newArray(6);
}

void test03() {
    char *buffer = (char *) malloc(10 * sizeof(char));
    buffer[0] = 'a';
    buffer[1] = 'b';
    buffer[5] = 'j';
    printf("%c\n", buffer[0]);
    printf("%c\n", buffer[5]);
    printf("%zu, %zu\n", sizeof(buffer), strlen(buffer));
}

int main(){
//    test01();
//    aBetterWayToUseFuncptr2();
    test03();
}