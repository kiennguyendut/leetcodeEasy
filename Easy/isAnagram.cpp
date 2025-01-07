class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths of the strings are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        // Create a frequency map for the characters in `s`
        vector<int> freq(26, 0); // Assuming only lowercase English letters
        
        // Count characters in `s` and decrement for `t`
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        
        // Check if all counts are zero
        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }
        
        return true; // All counts are zero, strings are anagrams
    }
};
