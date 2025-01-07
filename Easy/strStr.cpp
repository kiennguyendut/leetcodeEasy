#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Trường hợp mảng rỗng
        
        string prefix = strs[0]; // Giả định prefix ban đầu là chuỗi đầu tiên
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1); // Giảm kích thước prefix
                if (prefix.empty()) return ""; // Nếu không còn prefix chung, trả về ""
            }
        }
        return prefix; // Trả về prefix chung dài nhất
    }
};

int main(){
    vector<string> strs = {"owerfl", "flow", "flight"};
    Solution solution;
    string result = solution.longestCommonPrefix(strs);
    cout << result;
    return 0;
}