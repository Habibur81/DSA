
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        
        TreeNode(int data){
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

void inorderTraversel(TreeNode* root){
    if(root == nullptr) return;
    
    inorderTraversel(root->left);
    cout << root->data << endl;
    inorderTraversel(root->right);
}

void insertValue(TreeNode* &root, int val){

    if(root == nullptr){
        root = new TreeNode(val);
        return;
    } 
    TreeNode* temp = root;

    while(true){
        if(temp->data > val){
            if(temp->left == nullptr){
                temp->left = new TreeNode(val);
                temp = temp->left;
               return;
            }
            temp = temp->left;
        }else{
            if(temp->right == nullptr){
                temp->right = new TreeNode(val);
                temp = temp->right;
                return;
            }
            temp = temp->right;
        }
    }
}

int main()
{
    TreeNode* root = nullptr;
    insertValue(root, 10);

    return 0;
}