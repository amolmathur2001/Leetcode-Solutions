class Solution {
    TreeNode* f(TreeNode* root, TreeNode* target){
        if(root==NULL)  return NULL;
        if(root->val==target->val)   return root;
        
        if(f(root->left, target))
            return f(root->left, target);
        return f(root->right, target);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned)  return f(cloned, target);
        return NULL;
    }
};
