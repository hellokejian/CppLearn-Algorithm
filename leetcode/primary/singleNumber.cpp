//
// Created by andy on 18-5-27.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        for (auto pd = nums.begin(); pd != nums.end(); pd++){
            auto pf = find(nums.end(), nums.begin(), *pd);
            cout << "&pd:" << &(*pd) << "   &pf:" << &(*pf) << endl;
            if (&(*pd) == &(*pf)){
//                cout << "*pd:" << *pd << "   *pf:" << *pf << endl;
                nums.erase(pd);
                nums.erase(pf);
            }
        }
        return nums[0];
    }
};

//int main(int argc, char const *argv[]) {
//    auto *s = new Solution();
//    vector<int> nums({1, 1, 4, 3, 2, 4, 2});
//    int num = s->singleNumber(nums);
//    cout << num << endl;
//    return 0;
//}

//auto *s = new Solution();
////    vector<int> nums({2, 14, 18, 22, 22});
////    vector<int> nums({3, 1});
////    vector<int> nums({7, 6, 4, 3, 1});
//vector<int> nums({1, 1, 3, 4, 3, 2, 4, 2});
////    list<int> list1({1, 1, 1, 3, 3, 4, 3, 2, 4, 2});
//set<int> set1;
////    remove(set1.begin(), set1.end(), nums);
//sort(nums.begin(), nums.end());
////    copy(nums.begin(), nums.end(), set1.begin());
////    unique(nums.begin(), nums.end());
////    set<int> a = nums;
//vector<int>::iterator pd;
//for (pd = nums.begin(); pd != nums.end(); ++pd) {
//cout << *pd << " ";
//}
////    int num = s->singleNumber(nums);
////    cout << num << endl;
//cout << endl;