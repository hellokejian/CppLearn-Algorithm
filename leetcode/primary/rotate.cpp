//
// Created by andy on 18-5-28.
//
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    }
    void rotate1(vector<int>& nums, int k) {
        int length = nums.size();
        int temp = 0;
        for(int i = 0; i < k; i++){
            // cout << "test\n";
            temp = nums[length - 1];
            for(int j = length - 1; j > 0; j--){
                nums[j] = nums[j - 1];
            }
            nums[0] = temp;
        }
    }
};

//int main(int argc, char const *argv[])
//{
//    Solution *s = new Solution();
//    vector<int>test({1,2,3,4,5,6,7});
//    vector<int>::iterator pd;
//    s->rotate(test, 3);
//    cout << "after rotated:\n";
//    for(pd = test.begin(); pd != test.end(); pd++){
//        cout << *pd << " ";
//    }
//    cout << endl;
//    return 0;
//}


