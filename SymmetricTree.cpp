/** * Definition for a binary tree node. * struct TreeNode { *
    int val; *
    TreeNode *left; *
    TreeNode *right; *
    TreeNode() : val(0), left(nullptr), right(nullptr) {} *
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} *
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} * }; */class Solution {public:
   bool isSymmetric(TreeNode* root) {
       return isMirror(root->left, root->right);
   }
   bool isMirror(TreeNode* left, TreeNode* right){
       if(!right && !left)
           return true;
       if(!left || !right)
           return false;
       if(left->val!=right->val)
           return false;
       return isMirror(left->left, right->right) && isMirror(left->right, right->left);
   }};