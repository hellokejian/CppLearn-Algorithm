// created on 20180701 by andy
#include <iostream>
using namespace std;
typedef void (*fun)(char, char);
void ss(char a, char b) {
    printf("%c %c\n", a, b);
}

void bb(char a, char b) {
    printf("%c %c\n", b, a);
}

int main(int argc, char const *argv[])
{
    fun ff = ss;
    ff('k', 'j');
    ff = bb;
    ff('k', 'j');
    return 0;
}
