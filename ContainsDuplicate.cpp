#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;  // Duplicate found
            }
        }
        return false;  // No duplicates found
    }
};

int main(){
    vector<int> vec1 = {1,2,3,4,5,6,7};
    Solution a;
    cout <<  a.containsDuplicate(vec1) << endl;    
    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;    
    
    return 0;
}