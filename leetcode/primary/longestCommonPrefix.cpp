//
// Created by DELL on 2018/6/5.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size() == 0)
            return "";
        if (strs.size() == 1)
            return strs[0];
        size_t minLength = strs[0].size();
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].size() < minLength) minLength = strs[i].size();
        }
        if (minLength == 0)
            return "";
        char c;
        for (int i = 0; i < minLength; i++) {
            for (int j = 0; j < strs.size(); ++j) {
                c = strs[0][i];
                if (strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
//            if ( i == minLength - 1) return strs[0].substr(0, i);
        }
        return strs[0].substr(0, minLength);
    }
};

int main() {
    Solution *s = new Solution();
//    vector<string>strs{"dog","racecar","car"};
//    vector<string> strs{"flower", "flow", "flight"};
//    vector<string> strs{"a"};
    vector<string> strs{"a", "a"};
//    vector<string> strs{};
    string result = s->longestCommonPrefix(strs);
    // printf("%c\n", result);
    cout << result << endl;
    string hello = "hello";
    cout << hello.substr(0, 5) << endl;
}