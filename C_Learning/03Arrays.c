#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void get_prime();
void base_change_16(int num_16); 
void base_change_16_test(); 
void base_change(int num, int base); 
void base_change_test(); 
void base_change_service();

//int main(void) {
//    //get_prime();
//    //base_change_test();
//    //printf("%d", 1520478151 / 365 / 24 / 3600 + 1970);
//    base_change_service();
//}

void get_prime() {
    int primes[5000];
    primes[0] = 2;
    primes[1] = 3;
    int count = 0;
    bool isPrime;
    //string a = "";
    for (int index = 2; index < 80; index++) {
        isPrime = true; // 每次开头都要设置！bug点
        for (int i = 0; i < count; i++) {
            if (index % primes[i] == 0){
                isPrime = false;
                break;
            }
        }
        if ( isPrime == true ){
            primes[count++] = index;
            printf("%d\t", index);
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    /*for (int index = 0; index < 10000; index++) {
        printf("%d\t", primes[index]);
        if (index % 10 == 0){
            printf("\n");
        }
    }*/
}


void base_change_16(int num_16) {
    int ret[20]; // 存数转换后的digit
    int length = 0; // 数组长度即转换成16进制后的位数
    int reminder; // 取模余数
    //int num; //商
    do {
        reminder = num_16 % 16;
        //printf("%d-", reminder);
        ret[length++] = reminder;
        num_16 /= 16;

    } while (num_16 > 0);
    for (int index = length - 1 ; index > -1; index-- ) {
        int num = ret[index];
        if (num > 9){
            char c = num + 87;
            printf("%c", c);
        } else{
            printf("%d", num);
        }
    }
    printf("\n");
}


void base_change_16_test() {
    for (int index = 0; index < 1000; ++index) {
        base_change_16(index);
    }
}


void base_change(int num, int base) {
    int ret[20]; // 存数转换后的digit
    int length = 0; // 数组长度即转换成16进制后的位数
    int reminder; // 取模余数
    const char baseDigits[16] = { '0','1','2','3','4','5'
        ,'6','7','8','9','a','b','c','d','e','f' };
    do {
        reminder = num % base;
        ret[length++] = baseDigits[reminder];
        num /= base;

    } while (num > 0);
    for (int index = length - 1; index > -1; index--) {
        printf("%c", ret[index]);
    }
    printf("\n");
}

void base_change_test() {
    base_change(0, 2);
    base_change(0, 4);
    base_change(0, 8);
    base_change(0, 16);
    base_change(2018, 2);
    base_change(2018, 4);
    base_change(2018, 8);
    base_change(2018, 16);
}


void base_change_service() {
    int num;
    int base;
    printf("请输入您想要转换的数和要转换的进制：");
    scanf_s("%d %d", &num, &base);
    base_change(num, base);
}


