//
// Created by andy on 18-5-30.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool legal(char c) {
        return ((c >= 48) && (c <= 57)) || ((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122));
    }

    bool isLetter(char c){
        return ((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90));
    }

    bool isPalindrome(string s) {
        if (s.length() < 2)
            return true;
        size_t i = 0, j = s.length() - 1;
        while (i < j) {
            if (!legal(s[i])) {
                ++i;
                continue;
            }
            if (!legal(s[j])) {
                --j;
                continue;
            }
            if (s[i] == s[j] || (abs(s[i] - s[j]) == 32 &&  isLetter(s[i]) && isLetter(s[j]))) {
                ++i;
                --j;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution *s = new Solution();
    string str1 = "A man, a plan, a canal: Panama";
    string str2 = "race a car";
    str2 = "0P";
//    str1 = "rat";
//    str2 = "car";
    cout << s->isPalindrome(str1) << endl;
    cout << s->isPalindrome(str2) << endl;
//    cout << s->legal('a') << endl;
//    cout << s->legal('z') << endl;
//    cout << s->legal('A') << endl;
//    cout << s->legal('Z') << endl;
//    cout << s->legal('9') << endl;
//        for (char c: str1){
//            cout << c << " " << s->legal(c) << endl;
//        }
//    printf("%d\n", '0');
//    printf("%d\n", 'P');
}