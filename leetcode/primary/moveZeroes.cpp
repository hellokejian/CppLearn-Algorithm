//
// Created by andy on 6/13/18.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// my second edition
class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        if (nums.size() < 2)
            return;
        vector<int>::iterator index, index2;
        int zeroNum = 0;
        size_t length = nums.size();
        for (int i = 0; i < length; ++i) {
            if (nums[i] == 0) {
                zeroNum++;
            } else{
                nums[i - zeroNum] = nums[i];
            }
        }
        for (size_t j = length - 1; j > length - 1 - zeroNum; --j) {
            nums[j] = 0;
        }
    }
};

int main() {
    Solution *s = new Solution();
//    vector<string>strs{"dog","racecar","car"};
//    vector<string> strs{"flower", "flow", "flight"};
//    vector<string> strs{"a"};
    vector<int> nums{0, 0, 1, 2, 0, 2, 4};
//    vector<int> nums{1, 2, 2, 4};
//    vector<string> strs{};
    s->moveZeroes(nums);
    for (int &num:nums) {
        printf("%d ", num);
    }
    printf("\n");
}

// my first edition
//class Solution {
//public:
//    void moveZeroes(vector<int> &nums) {
//        if (nums.size() < 2)
//            return;
//        vector<int>::iterator index, index2;
//        int zeroNum = 0;
////        index = find(nums.end(), nums.begin(), 2);
////        printf("%d\n", index);
//        for (index = nums.end() - 1; index != nums.begin() - 1; --index) {
//            if (*index == 0) {
//                for (index2 = index; index2 != nums.end() - zeroNum; ++index2) {
//                    *index2 = *(index2 + 1);
//                }
//                *(nums.end() - zeroNum - 1) = 0;
//                zeroNum++;
//            }
////            printf("%d ", *index);
//        }
////        printf("\n");
////        index = nums.end() - 1;
////        printf("%d\n", *index);
//    }
//};

// my second edition
//class Solution {
//public:
//    void moveZeroes(vector<int> &nums) {
//        if (nums.size() < 2)
//            return;
//        vector<int>::iterator index, index2;
//        int zeroNum = 0;
//        for (index = nums.begin(); index != nums.end() - zeroNum; ++index) {
//            if (*index == 0) {
//                for (index2 = index; index2 != nums.end() - zeroNum - 1; ++index2) {
//                    printf("haha\n");
////                    *(index2 - 1) = *index2;
//                }
//                *(nums.end() - zeroNum - 1) = 0;
//                zeroNum++;
//            }
//        }
//    }
//};