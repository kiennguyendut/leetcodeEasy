//Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
#include<iostream>
#include <vector>
#include <queue>
using namespace std;

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Nếu cây rỗng, trả về danh sách rỗng
        if (!root) return {};

        vector<vector<int>> result; // Kết quả trả về
        queue<TreeNode*> q; // Hàng đợi dùng để duyệt theo cấp độ
        q.push(root); // Đưa nút gốc vào hàng đợi

        while (!q.empty()) {
            int levelSize = q.size(); // Số lượng nút ở cấp độ hiện tại
            vector<int> currentLevel; // Lưu các giá trị của cấp độ hiện tại

            // Duyệt tất cả các nút trong cấp độ này
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front(); // Lấy nút đầu hàng đợi
                q.pop(); // Loại bỏ nút đầu hàng đợi
                currentLevel.push_back(node->val); // Thêm giá trị nút vào cấp độ hiện tại

                // Thêm các con của nút vào hàng đợi (nếu có)
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel); // Thêm cấp độ hiện tại vào kết quả
        }

        return result; // Trả về danh sách kết quả
    }
};

int main() {
    // Tạo cây nhị phân mẫu
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Gọi hàm levelOrder
    Solution solution;
    vector<vector<int>> result = solution.levelOrder(root);

    // In kết quả
    cout << "Level order traversal: " << endl;
    for (const auto& level : result) {
        cout << "[ ";
        for (int val : level) {
            cout << val << " ";
        }
        cout << "]" << endl;
    }

    // Dọn dẹp bộ nhớ (delete các nút trong cây)
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}