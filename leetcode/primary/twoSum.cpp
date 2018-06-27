//
// Created by andy on 18-5-25.
//
//给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//
//你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
//
//示例:
//
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result(2);

    for (int i = 0; i < nums.size(); i++){
        for (int j = 0; j < nums.size(); j++){
            if ((i != j) && (nums[i] + nums[j] == target)){
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}
