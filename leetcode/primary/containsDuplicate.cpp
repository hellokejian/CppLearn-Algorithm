//
// Created by andy on 18-5-27.
//
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        if (nums.size() < 2){
            return false;
        }
        vector<int>::iterator pd;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]){
                return true;
            }
        }
        return false;
    }
};
//
//int main(int argc, char const *argv[]) {
//    Solution *s = new Solution();
////     vector<int>nums({2,14,18,22,22});
////    vector<int> nums({3, 1});
//     vector<int>nums({7,6,4,3,1});
////    vector<int>nums({1,1,1,3,3,4,3,2,4,2});
//    bool flag = s->containsDuplicate(nums);
//    cout << flag << endl;
//    return 0;
//}

// if (nums.size() > 10) {
//             return false;
//         }else{
//             vector<int>flags({0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
//             int flag;
//             for(int index = 0; index < nums.size(); index ++){
//                 flag = flags[nums[index]];
//                 if (flag == 1) {
//                     return false;
//                 }
//                 flag = 1;
//             }
//             return true;
//         }
// }

//    if (nums.size() == 0) {
//        return false;
//    }
//    if (nums.size() == 1) {
//        return false;
//    }
//    int temp;
//    bool move = false;
//    for (int i = 0; i < nums.size() - 1; i++) {
//        for (int j = 0; j < nums.size() - 1 - i; j++) {
//            if (nums[j] == nums[j + 1]) {
//                return true;
//            } else if (nums[j] < nums[j + 1]) {
//                temp = nums[j];
//                nums[j] = nums[j + 1];
//                nums[j + 1] = temp;
//                move = true;
//            }
//        }
//        if (!move) {
//            return false;
//        }
//        move = false;
//    }
//    return false;
//}
