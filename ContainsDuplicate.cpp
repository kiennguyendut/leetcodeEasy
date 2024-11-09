#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++ ){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return 0;
                }
            }
        }
        return 1;
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