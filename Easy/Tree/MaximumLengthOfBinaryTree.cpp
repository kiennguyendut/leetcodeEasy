#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.*/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0; // Nếu cây rỗng, độ sâu là 0
        int leftDepth = maxDepth(root->left);  // Đệ quy tính độ sâu nhánh trái
        int rightDepth = maxDepth(root->right); // Đệ quy tính độ sâu nhánh phải
        return max(leftDepth, rightDepth) + 1; // Độ sâu là lớn nhất của hai nhánh + 1
    }
};
int main() {
    TreeNode* root = new TreeNode(3, 
                       new TreeNode(9), 
                       new TreeNode(20, 
                           new TreeNode(15), 
                           new TreeNode(7)));
    
    Solution solution;
    int depth = solution.maxDepth(root);
    cout << "Maximum Depth: " << depth << endl; // Output: 3

    return 0;
}
