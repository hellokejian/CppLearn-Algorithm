#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index = 0;
        int buy = -1, sell = 0, profit = 0;
        
        if (prices.size() == 0) {
            return 0;
        }
        
        while (index < prices.size() -1){
            if (prices[index] < prices[index + 1]){
                if (buy == -1){
                    buy = prices[index];
                    // cout << "buy:" << prices[index] << endl;
                }
            }
            else {
                if (buy != -1){ //sell == 0 && 
                    sell = prices[index];
                    // cout << "sell:" << sell << endl;
                    profit += (sell - buy);
                    buy = -1;
                    sell = 0;
                }
            }
            index ++;
        }
        
        if (buy > -1) {
            profit += (prices[index] - buy);
        }
        
        return profit;
    }
};


// int main(int argc, char const *argv[])
// {
//     Solution *s = new Solution();
//     // vector<int>nums({7,1,5,3,6,4});
//     // vector<int>nums({1,2,3,4,5});
//     // vector<int>nums({7,6,4,3,1});
//     vector<int>nums({2,1,2,0,1});
//     // cout << nums[3] << endl;
//     int maxProfit = s->maxProfit(nums);
//     cout << maxProfit << endl;
//     return 0;
// }
