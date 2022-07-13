#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val = data;
        left = right  = NULL;
    }
};
vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int> > ans;
    if(root == NULL){
        return ans;
    }
    
    queue<TreeNode*> q;
    q.push(root);

    while(q.size() > 0){
        int size = q.size();
        vector<int> v;

        while(size){
            TreeNode* temp = q.front();
            v.push_back(temp->val);
            q.pop();

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
            size--;
        }
        ans.push_back(v);


    }
    return ans;
    
        
}
int main(){
    struct TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->right = new TreeNode(7);

    root->right->left = new TreeNode(15);

    vector<vector<int> > a =  levelOrder(root);
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<",";
    }
}
