//
// Created by andy on 18-5-30.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
//    good example
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        int flag[256] = {0};
        for (char i : s) {
            flag[i]++;
        }
        for (char j: t) {
            flag[j]--;
            if (flag[j] < 0) return false;
        }
        return true;
    }
};

int main() {
    Solution *s = new Solution();
    string str1 = "anagram";
    string str2 = "nagaram";
//    str1 = "rat";
//    str2 = "car";
    cout << s->isAnagram(str1, str2) << endl;
}

//    my edition
//public:
//bool isAnagram(string s, string t) {
//    if (s.size() != t.size())
//        return false;
//    sort(s.begin(), s.end());
//    sort(t.begin(), t.end());
//    return s == t;
//}
