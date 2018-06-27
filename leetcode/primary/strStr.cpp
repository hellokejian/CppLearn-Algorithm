//
// Created by andy on 18-5-28.
//
#include <iostream>
#include <string>

using namespace std;

//my second edition 8ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        if (needle.size() > haystack.size()){
            return -1;
        }
//        int anchor;
        int length = static_cast<int>(needle.size());
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            if (haystack.substr(i, length) == needle.substr(0, length)){
                return i;
            }
        }
        return -1;
    }
};

//int main() {
//    Solution *s = new Solution();
//    string haystack = "hello";
//    string needle = "ll";
//    int result = s->strStr(haystack, needle);
//    cout << result << endl;
//
//    string str = "helloworld";
//    cout << str.substr(0, str.size()) << endl;
//}

//my first edition 589ms
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//        if (needle.empty()) {
//            return 0;
//        }
//        if (needle.size() > haystack.size()){
//            return -1;
//        }
//        int anchor;
//        for (int i = 0; i < haystack.length(); ++i) {
//            anchor = i;
//            for (int j = 0; j < needle.length(); ++j) {
//                if (haystack[i + j] != needle[j]) {
//                    anchor = -1;
//                    break;
//                }
//            }
//            if (anchor > -1) return anchor;
//        }
//        return -1;
//    }
//};

