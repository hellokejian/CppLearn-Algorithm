//
// Created by andy on 18-5-25.
//
//从排序数组中删除重复项
//给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//cout << "num size:" << length << endl;
//cout << "i:" << i << endl;

int removeDuplicates(vector<int> &nums) {
    auto length = (int) nums.size();
    cout << "length:" << length << endl;
    int i = 0;
    while (i < length - 1) {
        if (nums[i] == nums[i + 1]) {
            for (int index = i; index < length - 1; ++index) {
                nums[index] = nums[index + 1];
            }
            length--;
            continue;
        }
        i++;
    }
    return length;
}

void test() {
    vector<int> arr({0, 0, 1, 1, 1, 2, 2, 3, 3, 4}); //
    int length = removeDuplicates(arr);
    cout << length << endl;
    vector<int>::iterator pd;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "-";
    }
    cout << endl;
}

//int main(int argc, char const *argv[]) {
//    test();
//}

