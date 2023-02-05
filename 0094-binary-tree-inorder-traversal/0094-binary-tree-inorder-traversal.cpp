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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> node;
        vector<int> veec;
        TreeNode *current = root;
        while(current != NULL || node.empty() == false){
            while(current != NULL){
                node.push(current);
                current = current->left;
            }
            current = node.top();
            node.pop();
            veec.push_back(current->val);
            current = current->right;
        }
        return veec;
    }
};
