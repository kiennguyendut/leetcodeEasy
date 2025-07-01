#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLen = 0, start = 0;
        for (int i = 0; i < s.length(); ++i) {
            /*"Nếu ký tự s[i] đã từng xuất hiện và lần xuất hiện trước đó nằm 
            trong đoạn chuỗi hiện tại (window), thì ta cần đẩy start qua khỏi vị trí 
            trùng để loại ký tự trùng ra khỏi window."*/            
            if (charIndex.count(s[i]) && charIndex[s[i]] >= start) {
                start = charIndex[s[i]] + 1;
            }
            charIndex[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }
        return maxLen;
    }
};


int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    Solution sol;
    int result = sol.lengthOfLongestSubstring(input);

    cout << "The length of the longest substring without duplicate characters is: " << result << endl;
    return 0;
}
