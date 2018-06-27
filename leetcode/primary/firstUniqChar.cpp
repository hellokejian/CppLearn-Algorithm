//
// Created by andy on 18-5-30.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
//        string str = "hello world";
//        size_t pos = s.find_first_of('l');
//        size_t eos = s.find_last_of('l');
//        printf("%zu\n", pos);
//        printf("%zu\n", eos);
        if (s.length() == 1){
            return 0;
        }
        char c;
        for (int i = 0; i < s.length(); ++i) {
            c = s[i];
            if (s.find_first_of(c) == s.find_last_of(c)){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution *s = new Solution();
    string str = "loveleetcode";
    str = "leetcode";
    str = "";
    str = "s";
    cout << s->firstUniqChar(str) << endl;
}
