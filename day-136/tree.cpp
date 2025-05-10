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
        vector<int> largestValues(TreeNode* root) {
            
            if(root==NULL) return {};
            
            vector<int>ans;
            queue<TreeNode *>q;
    
            q.push(root);
    
    
            while(!q.empty()){
    
                int maxValue=INT_MIN;
    
                int size=q.size();
    
                for(int j=0;j<size;j++){
                    
                    TreeNode *temp=q.front();
    
                    q.pop();
    
                    maxValue=max(temp->val,maxValue);
    
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
    
    
                }
    
                ans.push_back(maxValue);
    
            }
    
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
        int maxLevelSum(TreeNode* root) {
            
            if(root==NULL) return 0;
    
            queue<TreeNode *> q;
            q.push(root);
            
            int maxSum = INT_MIN;
    
            int maxLevel = 0;
            int currentLevel = 0;
    
            while(!q.empty()){
    
                int size_q=q.size();
                currentLevel++;
                int level_data=0;
    
                for(int a=0;a<size_q;a++){
    
                    TreeNode *temp=q.front();
                    // 3
    
                    q.pop();
                    // q=[]
    
                    level_data+=temp->val;
    
                    // level_data=[3]
                    if(temp->left){
                        q.push(temp->left);
                    }
                    // q=[9]
                    if(temp->right){
                        q.push(temp->right);
                    }
                    // q=[20]
                }
                // ans=[[3]]
                if(level_data>maxSum){
                    maxSum=level_data;
                    maxLevel=currentLevel;
                }
                
    
    
            }
    
            return maxLevel;
    
    
    
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
        int countNodes(TreeNode* root) {
            
            if(root==NULL) return 0;
            
            queue<TreeNode *>q;
            
            int count=0;
            q.push(root);
    
            while(!q.empty()){
                // q=[1]
                // [2,3]
               TreeNode *temp=q.front();
    
               count++;
            //    1
               q.pop();
    
               if(temp->left){
                q.push(temp->left);
               }
                if(temp->right){
                q.push(temp->right);
               }
    
            }
    
    
            return count;
            
    
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
        vector<vector<int>> levelOrder(TreeNode* root) {
           
            if(root==NULL) return {};
    
            vector<vector<int>>ans;
    
            queue<TreeNode *> q;
            q.push(root);
        
    
            while(!q.empty()){
    
                int size_q=q.size();
    
                vector<int>level_data;
    
                for(int a=0;a<size_q;a++){
    
                    TreeNode *temp=q.front();
                    // 3
    
                    q.pop();
                    // q=[]
    
                    level_data.push_back(temp->val);
                    // level_data=[3]
                    if(temp->left){
                        q.push(temp->left);
                    }
                    // q=[9]
                    if(temp->right){
                        q.push(temp->right);
                    }
                    // q=[20]
                }
                // ans=[[3]]
    
                ans.push_back(level_data);
    
    
            }
    
            return ans;
    
        }
    };