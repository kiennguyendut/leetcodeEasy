#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

class Solution
{
public:
    pair<int, int> expandFromCenter(const string &s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            --left;
            ++right;
        }
        return {left + 1, right - 1};
    }

    string longestPalindrome(string s)
    {
        if (s.empty())
        {
            return "";
        }

        int start = 0, end = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            auto [l1, r1] = expandFromCenter(s, i, i);     // palindrome lẻ
            auto [l2, r2] = expandFromCenter(s, i, i + 1); // palindrome chắn

            if (r1 - l1 > end - start)
            {
                start = l1;
                end = r1;
            }
            if (r2 - l2 > end - start)
            {
                start = l2;
                end = r2;
            }
        }
        return s.substr(start, end - start + 1);
    }
};

int main() {
    string s;
    Solution solution;
    cout << "Nhap chuoi:";
    cin >> s;
    string result = solution.longestPalindrome(s);
    cout << "Chuoi doi xung dai nhat: " << result << endl;
    return 0;
}