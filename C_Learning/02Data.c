#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void char_example() {
    int i;
    scanf_s("%d", &i);
    char c = i;
    printf("%c\n", c);
    
    if (49 == '1'){
        printf("ok\n");
    } else {
        printf("not okay\n");
    }
}

void char_example2() {
    char c = 'A';
    c++;
    printf("%c\n", c);
    printf("%c\n", 'C' - 'A');
    printf("%d\n", 'C' - 'A');
}

void data_example() {
    bool   boolVal = 0;
    int    intVal = 10;
    float  floatVar = 12.3;
    double doubleVar = 12.33e+7;
    char   charVar = 'P';
    printf("%d\n", intVal);
    printf("%f\n", floatVar);
    printf("%lf\n", doubleVar);
    printf("%g\n", doubleVar);
    printf("%e\n", doubleVar);
    printf("%c\n", charVar);
    printf("%d\n", boolVal);
}


//int main() {
//    //char_example();
//    //char_example2();
//    data_example();
//}