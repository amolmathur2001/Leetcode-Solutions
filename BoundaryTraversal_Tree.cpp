#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }

};
bool is_leaf(Node* root){
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    return false;
}
void LeftBoundary(Node* root,vector<int> &v){
    Node* temp = root->left;
    while(temp != NULL){
        if(!is_leaf(temp)){
            v.push_back(temp->data);
        }
        if(temp->left != NULL){
           temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
}
void rightBoundary(Node* root, vector<int> &v){
    Node* temp1 = root->right;
    vector<int> t;
    while(temp1 != NULL){
        if(!is_leaf(temp1)){
            t.push_back(temp1->data);
        }
        if(temp1->right != NULL){
            temp1 = temp1->right;
        }
        else{
            temp1 = temp1->left;
        }
    }
    for(int i = t.size()-1; i >= 0; i--){
        v.push_back(t[i]);
    }

}
void LeafNodes(Node* root, vector<int> &v){
    if(is_leaf(root)){
        v.push_back(root->data);
        return;
    }
    if(root->left != NULL){
        LeafNodes(root->left,v);
    }
    if(root->right != NULL){
        LeafNodes(root->right,v);
    }

}
vector <int> boundary(Node *root){
        //Your code here
        vector<int> v;
        if(root == NULL){
            return v;
        }
        else{
            v.push_back(root->data);
        }
        LeftBoundary(root,v);
        LeafNodes(root,v);
        rightBoundary(root,v);

        return v;


}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(4);
    root->left->left->right->left = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->left->right = new Node(11);
    root->right->right->left->left = new Node(10);

    vector<int> ans = boundary(root);
    for(auto it : ans){
        cout<<it<<" ";
    }


}
