// climbingStairs.cpp
#include <iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int first = 1, second = 2, ways = 0;
        for (int i = 3; i <= n; ++i) {
            ways = first + second;
            first = second;
            second = ways;
        }
        return second;
    }
};

int main() {
    int n;
    cout << "Nhap so bac cau thang: ";
    cin >> n;
    Solution solution;
    cout << "So cach leo len dinh: " << solution.climbStairs(n) << endl;
    return 0;
}