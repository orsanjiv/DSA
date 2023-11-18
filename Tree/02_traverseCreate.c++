#include<iostream>
using namespace std;
class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* buildTree(TreeNode* root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    root =  new TreeNode(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);
}

// preOrder traversal(NLR)
void preOrder(TreeNode* root){
    // base condition
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// inOrder Traversal(LNR)
void inOrder(TreeNode* root){
    // base condition
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

// postOrder Traversal(LRN)
void postOrder(TreeNode* root){
    // base condition
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main(){

    TreeNode* root = NULL;
    // 7 2 5 -1 -1 6 -1 -1 4 9 -1 -1 -1
    root = buildTree(root);
    
    // function for preorder 
    cout<<"\nPreorder: ";
    preOrder(root);

    // function for inorder
    cout<<"\nInorder: ";
    inOrder(root);

    // function for postOrder
    cout<<"\nPostOrder: ";
    postOrder(root);


   
}