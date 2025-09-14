/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroup;
        
        // Step 1: To group strings as sorted
        for(const string& str : strs){
            string sortedStr = str; //Copy base string
            sort(sortedStr.begin(), sortedStr.end());// Sorted string as anphabe
            anagramGroup[sortedStr].push_back(str); // To group string to map
        }

        // Step 2: Switch unordered_map to vector
        vector<vector<string>> result;
        for( const auto& group : anagramGroup){
            result.push_back(group.second);
        }
        return result;

    }
};