#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0; 
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]){
                maxProfit += prices[i] - prices[i-1];
            }
            
        }
        return maxProfit;
    }
    
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    // Call the maxProfit method and store the result.
    int profit = solution.maxProfit(prices);
    
    // Print the maximum profit.
    cout << "Maximum profit: " << profit << endl;
    
    return 0;
}