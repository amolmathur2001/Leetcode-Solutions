#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data  = val;
        left = right = NULL;
    }
};
class NodeValue{
    public:
    int maxNode,minNode,maxSize;
    NodeValue(int minNode, int maxNode, int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
    
};
NodeValue largestBSTSubtreeHelper(Node* root){
    // leaf node is always a valid BST
    if(root == NULL){
        return NodeValue(INT_MAX,INT_MIN,0);
    }
    auto left = largestBSTSubtreeHelper(root->left);
    auto right = largestBSTSubtreeHelper(root->right);

    // if current node is greater than left and smaller than right than it is a valid BST
    if(left.maxNode < root->data && root->data < right.minNode){
        //then it is BST
         return NodeValue(min(root->data, left.minNode), max(root->data, right.maxNode), 
                            left.maxSize + right.maxSize + 1);

    }
    //if it is not a BST

    return(NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize)));
}
int largestBST(Node* root){
    int ans = largestBSTSubtreeHelper(root).maxSize;
    return ans;
}
int main(){
    struct node* root = new node(20);
    root->left = new node(15);
    root->left->left = new node(14);
    root->left->left->right = new node(17);
    root->left->right = new node(18);
    root->left->right->left = new node(16);
    root->left->right->right = new node(19);
    root->right = new node(40);
    root->right->left = new node(30);
    root->right->right = new node(60);
    root->right->right->left = new node(50);
    cout<<largestBSTSubtree(root);

}
