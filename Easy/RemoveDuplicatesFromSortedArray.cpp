class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int uniqueIndex = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[uniqueIndex]){
                uniqueIndex++;
                //di chuyển các phần tử duy nhất đến đầu của vector và giữ nguyên vị trí của chúng
                nums[uniqueIndex] = nums[i];
            }
        }        
        return uniqueIndex + 1;
    }
};