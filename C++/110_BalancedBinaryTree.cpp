/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        if(abs(GetDepth(root -> left) - GetDepth(root -> right)) > 1){
            return false;
        }
        return isBalanced(root -> left) && isBalanced(root -> right);
    }

    int GetDepth(TreeNode* root){
        if(!root){
            return 0;
        }else{
            return 1 + max(GetDepth(root -> left), GetDepth(root -> right));
        }
    }
};