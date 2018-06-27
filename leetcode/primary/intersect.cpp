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
//    leetcode 4ms version
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        auto len1= static_cast<int>(nums1.size());
        auto len2= static_cast<int>(nums2.size());
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<len1&&j<len2)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};


//int main(){
//    auto *s = new Solution();
////    vector<int>nums1{1, 2, 3, 2, 1};
//    vector<int>nums1{1, 2};
//    vector<int>nums2{1, 1};
//    vector<int>nums3{};
//    nums3 = s->intersect(nums1, nums2);
////    vector<int>::iterator pd;
//    for (int &pd : nums3) {
//        cout << pd << " ";
//    }
//    cout << endl;
//    return 0;
//}

//My first edition
//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        if (nums1.empty()){
//            return nums1;
//        }
//        if (nums2.empty()){
//            return nums2;
//        }
////        remove(nums2.begin(), nums2.end(), nums1.begin());
//        vector<int>i_sect = {};
//        for (int &pd : nums2) {
//            auto p = find(nums1.begin(), nums1.end(), pd);
//            if (p != nums1.end()){
//                i_sect.push_back(*p);
//                nums1.erase(p);
//            }
////            (nums1.begin(), nums1.end(), *p);
//        }
////        auto p = find(nums1.begin(), nums1.end(), 2);
////        cout << *p;
//        return i_sect;
//    }
//};

//My second edition
//class Solution {
//public:
//    vector<int> intersect1(vector<int>& nums1, vector<int>& nums2) {
//        vector<int>i_sect = {};
//        for (int &pd : nums2) {
//            auto p = find(nums1.begin(), nums1.end(), pd);
//            if (p != nums1.end()){
//                i_sect.push_back(*p);
//                nums1.erase(p);
//            }
//        }
//        return i_sect;
//    }
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        if (nums1.empty()){
//            return nums1;
//        }
//        if (nums2.empty()){
//            return nums2;
//        }
//        if (nums1.size() >= nums2.size()){
//            return intersect1(nums1, nums2);
//        } else{
//            return intersect1(nums2, nums1);
//        }
//    }
//};