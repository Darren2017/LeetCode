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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >ans;
        if(!root){
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            vector<int> tmp;
            for(int i = 0; i < len; i++){
                TreeNode *p = q.front();
                p.pop();
                tmp.push_back(p -> val);
                if(p -> left){
                    q.push(p -> left);
                }
                if(p -> right){
                    q.push(p -> right);
                }
            }
            ans.push_back(tmp);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};