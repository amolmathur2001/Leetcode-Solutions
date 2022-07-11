#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right = NULL;
    }
};
vector<int> rightSideView(TreeNode* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(q.size() > 0){
        int count = q.size();
        int data = 0;
        while(count > 0){
            TreeNode* temp = q.front();
            q.pop();
            data = temp->val;
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
            count--;

        }

        ans.push_back(data);



    }

    return ans;
    
}
int main(){
    struct TreeNode* root = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->right  = new TreeNode(9);
    root->left = new TreeNode(1);
    root->right->left = new TreeNode(6);
    root->right->left->right = new TreeNode(7);
    root->right->left->left = new TreeNode(5);

    vector<int> a = rightSideView(root);

    for(auto it : a){
        cout<<it<<" ";
    }
}
