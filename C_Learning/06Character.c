#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void) {
    void concat_test();
    void equal_test();
    void character_scanf();
    void readline_test();
    void countWords_test();

    //concat_test();
    //equal_test();
    //character_scanf();
    //readline_test();
    countWords_test();
}

void concat(char result[], char str1[], int l1, char str2[], int l2) {
    int index1, index2;
    for (index1 = 0; index1 < l1; index1++) {
        result[index1] = str1[index1];
    }
    for (index2 = 0; index2 < l2; index2++) {
        result[index2 + l1] = str2[index2];
    }
}

void concat2(char result[], char str1[], char str2[]) {
    int cnm = 0;
    int index = 0;
    while (str1[index] != '\0'){
        result[cnm++] = str1[index++];
    }
    index = 0;
    while (str2[index] != '\0') {
        result[cnm++] = str2[index++];
    }
}

int length(char str[]) {
    int index = 0;
    while (str[++index] != '\n') {
        // fuck you !
    }
    return index;
}

void concat_test() {
    void concat(char result[], char str1[], int l1, char str2[], int l2);
    void concat2(char result[], char str1[], char str2[]);
    char str1[] = "Kejian";
    char str2[] = "Chenqi";
    char result[5];
    concat(result, str1, 2, str2, 3);
    for (int index = 0; index < 5;index++) {
        printf("%c ", result[index]);
    }
    printf("\n");

    //int cnt = length(str1) + length(str2);
    char result2[12];
    concat2(result2, str1, str2);
    for (int index = 0; index < 12; index++) {
        printf("%c ", result2[index]);
    }
    printf("\n");
}

bool equal(char str1[], char str2[]) {
    bool flag = true;
    int index = 0;
    while (str1[index] != '\0' && str2[index] != '\0' && str1[index] == str2[index]) {
        index++;
    }
    if (str1[index] == '\0' && str2[index] == '\0'){
        return true;
    } else{
        return false;
    }
}

void equal_test() {
    bool equal(char str1[], char str2[]);

    printf("%i\n", equal("kejian", "kejian"));
    printf("%i\n", equal("", ""));
    printf("%i\n", equal("kejan", "kejian"));
    printf("%i\n", equal("kejian", "kejian123"));
}

void character_scanf() {
    /*char result[7];
    printf("please ehter something:");
    scanf_s("%s", result, 5);
    printf("%s\n", result);

    char str1[81], str2[81], str3[81];
    printf("enter 3 characters:");
    scanf_s("%s%s%s", str1, 80, str2, 80, str3, 80);
    printf("%s %s %s ", str1, str2, str3);*/
    char input[80];
    input[0] = getchar();
    input[1] = getchar();
    input[2] = getchar();
    input[3] = getchar();
    printf("%c", input[0]);
}

void readline(char buffer[]) {
    char character;
    int i = 0;
    do {
        character = getchar();
        buffer[i++] = character;
    } while (character != '\n');
    buffer[i - 1] = '\0';
}

void readline_test() {
    char input[80];
    readline(input);
    printf("%s", input);
}

bool alphabetic(const char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    } else{
        return false;
    }
}

void countWords(char str[]) {
    int count = 0;
    int index = 0;
    char character;
    index = -1;
    do {
        index++;
        character = str[index];
        if (alphabetic(character)){
            do {
                index++;
                character = str[index];
            } while (alphabetic(character));
            //printf("%c", character);
            count++;
        } else{
            continue;
        }
    } while (character != '\0');
    printf("%d\n", count);
}
void countWords2(char str[]) {
    int count = 0;
    int index;
    char character;
    bool lookForWord = true;
    for (index = 0; str[index] != '\0'; index++) {
        if (alphabetic(str[index])){
            if (lookForWord){
                count++;
                lookForWord = false;
            }
        }
        else {
            lookForWord = true;
        }
    }
    printf("%d\n", count);
}
void countWords_test() {
    //countWords();
    int count = 0;
    //char character;
    char text[] = 
        "i am really good at this,f trust \
me about it . the only reason i quit is i am dead!";
    countWords2(text);
    printf("haha\b\a\n");
    printf("\033\n");
    char arr[6] = "Hello";
    printf("%s\n", arr);
}
