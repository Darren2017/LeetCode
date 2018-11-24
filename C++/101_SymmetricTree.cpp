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
    bool ismirror(TreeNode* a, TreeNode* b){
        if(!a){
            return b == NULL;
        }
        if(!b){
            return a == NULL;
        }
        if(a -> val == b -> val){
            return ismirror(a -> left, b -> right) && ismirror(a -> right && b -> left);
        }
        return false;
    }

    bool isSymmetric(TreeNode* root){
        return ismirror(root, root);
    }
};