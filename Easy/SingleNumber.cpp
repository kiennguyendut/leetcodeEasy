#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*Solution1*/
/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR all elements, khi 2 giá trị khác nhau sẽ trả vè 1, nhớ đổi qua nhị //phân trước khi XOR
            // vì các phần tử trùng lặp đều xuất hiện 2 lần, do đó giá trị sau khi XOR sẽ không đổi
        }
        return result;
    }
};*/
/*Solution 2*/
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        int cnt = 0;
        int n = nums.size();
        if (n == 1)
            ans = nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i = i + 2)
        {
            if (nums[i] != nums[i + 1])
            {
                ans = nums[i];
                break;
            }
            else
            {
                ans = nums[n - 1];
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> vec1 = {0, 1, 0};
    Solution a;
    cout << a.singleNumber(vec1) << endl;
    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}