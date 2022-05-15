#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
void swap(TreeNode* temp){
    if(temp == NULL){
        return;

    }
    swap(temp->left);
    swap(temp->right);

    TreeNode* t = temp->left;
    temp->left = temp->right;
    temp->right = t;

}
TreeNode* InvertTree(TreeNode* root){
   swap(root);
   return(root);


}
int main(){
    struct node* root = new node(4);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(9);
    root->right->left = new node(6);

    LevelOrder(root);

}
