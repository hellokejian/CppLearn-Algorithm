//
// Created by andy on 18-5-29.
//
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
// my edition 4ms
class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        if (digits.empty()) return digits;

        int len = digits.size()-1;
        int c = 1;
        while (len>=0)
        {
            digits[len] += c;
            c = digits[len]/10;
            digits[len] %= 10;
            if (c == 0) break;
            len --;
        }

        if (c > 0)
        {
            digits.insert(digits.begin(), c);
        }

        return digits;
    }
};


//int main(int argc, char const *argv[]) {
//    Solution *s = new Solution();
//    vector<int> nums({9, 9, 9});
//    vector<int> result = s->plusOne(nums);
//    for (int &pd : result) {
//        cout << pd << " ";
//    }
//    cout << endl;
//    return 0;
//}

// my edition 4ms
//class Solution {
//public:
//    vector<int> plusOne(vector<int> &digits) {
//        int i = digits.size() - 1;
//        digits[i] += 1;
//        while (i >= 0) {
//            if (digits[i] > 9) {
//                if (i == 0) {
//                    vector<int> newVec(digits.size() + 1);
//                    newVec[0] = 1;
//                    for (int j = 1; j < newVec.size(); ++j) {
//                        newVec[j] = 0;
//                    }
//                    return newVec;
//                }
//                digits[i] = 0;
//                digits[i - 1] += 1;
//            }
//            --i;
//        }
//        return digits;
//    }
//};
