#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public: 
        int removeDuplicates(vector<int>& nums) {
            // If the input array is empty, return 0 as there are no elements to process.
            if(nums.empty()) return 0;
            
            // Initialize uniqueIndex to 1, which tracks the position for the next unique element.
            int uniqueIndex = 1;
            
            // Iterate through the array starting from the second element.
            for(int i = 1; i < nums.size(); i++){
                // If the current element is different from the last unique element.
                if(nums[i] != nums[uniqueIndex]){
                    // Copy the current element to the uniqueIndex position.
                    nums[uniqueIndex] = nums[i];
                    // Increment uniqueIndex to point to the next position for a unique element.
                    uniqueIndex++;                    
                }
            }        
            // Return the count of unique elements (uniqueIndex represents the last index, so add 1).
            return uniqueIndex;
        }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    
    // Call the removeDuplicates method and store the result.
    int uniqueCount = solution.removeDuplicates(nums);
    
    // Print the number of unique elements.
    cout << "Number of unique elements: " << uniqueCount << endl;
    
    // Print the modified array with unique elements.
    cout << "Modified array: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}