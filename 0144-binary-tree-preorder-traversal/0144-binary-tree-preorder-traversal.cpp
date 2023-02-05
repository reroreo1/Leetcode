/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> res;
    vector<int> had;
        if (!root)
            return had;
        res.push(root);
        while(!res.empty()){
            TreeNode* hello = res.top();
            had.push_back(hello->val);
            res.pop();
            if (hello->right != NULL)
                res.push(hello->right);
            if (hello->left != NULL)
                res.push(hello->left);
        }
       return had;
    }
};