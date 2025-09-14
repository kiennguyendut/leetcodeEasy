#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            if(prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices;
    int n, price;
    cout << "Nhap so ngay giao dich: ";
    cin >> n;
    cout << "Nhap gia co phieu moi ngay: ";
    for (int i = 0; i < n; ++i) {
        cin >> price;
        prices.push_back(price);
    }   
    Solution solution;
    cout << "Loi nhuan toi da co the dat duoc: " << solution.maxProfit(prices) << endl;
    return 0;
}