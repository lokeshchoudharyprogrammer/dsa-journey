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
        vector<int>ans;
        vector<int> preorderTraversal(TreeNode* root) {
            
            if(root==NULL){
                return {} ;
            }
            ans.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
            return ans;
        }
    };


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
        vector<int>ans;
        vector<int> postorderTraversal(TreeNode* root) {
            if(root==NULL){
                return {} ;
            }
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            ans.push_back(root->val);
            return ans;
    
        }
    };


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
    
        vector<int>ans;
        vector<int> inorderTraversal(TreeNode* root) {
    
            if(root==NULL) return {};
            inorderTraversal(root->left);
            ans.push_back(root->val);
            inorderTraversal(root->right);
            return ans;
        }
    };