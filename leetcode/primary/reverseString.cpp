//
// Created by andy on 18-5-29.
//

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
//        string result;
//        for (int i = 0; i < s.size(); ++i) {
//            result.push_back(s.back());
//            s.pop_back();
//        }
//        return result;
        string re;
        int count = s.size();
        for (int i = 0; i < count; i++) {
            re.push_back(s.back());
            s.pop_back();
        }
        return re;
    }
};

int main() {
    Solution *s = new Solution();
    string result = s->reverseString("hello world");
    cout << result << endl;
    return 0;
}

//public:
//string reverseString(string s) {
//    int length = s.length();
//    char temp;
//    for (int i = 0; i < length / 2; ++i) {
//        temp = s[i];
//        s[i] = s[length - 1 - i];
//        s[length - 1 - i] = temp;
//    }
//    return s;
//}
//};