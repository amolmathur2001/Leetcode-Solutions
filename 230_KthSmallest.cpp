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
void Inorder(node* root, vector<int> &s){
    if(root == NULL){
        return;
    }
    Inorder(root->left,s);
    s.push_back(root->data);
    Inorder(root->right,s);

}
vector<int> PirntInorder(node* root){
    vector<int> s;
    Inorder(root,s);
    return s;

}
int kthSmallest(node* root, int k) {
    vector<int> arr = PirntInorder(root);
    int i;
    for(i = 0; i < arr.size(); i++){
        if(k == i+1){
            break;
        }
    }
    return (arr[i]);


}
int main(){
    struct node* root = new node(5);
    root->left = new node(3);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right = new node(7);
    root->right->right = new node(8);
    root->right->left = new node(6);
    int k  =  7;
    cout<<kthSmallest(root,k);

}
