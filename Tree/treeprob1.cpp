#include <bits/stdc++.h>
using namespace std;

class treeNode{
    public:
        int data;
        treeNode* left;
        treeNode* right;

        treeNode(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }

        ~treeNode(){
            delete left;
            delete right;
        }

}; 

void solveFunc(treeNode* root, string path, vector<string> &ans){
    if(root == NULL)
        return;

    path += to_string(root->data);

    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);
    }else{
        path += "->";
        solveFunc(root->left, path, ans);
        solveFunc(root->right, path, ans);
    }
}

int main(){
    treeNode* root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->right = new treeNode(5);

    treeNode* temp = root;
    vector<string>ans;

    solveFunc(temp, "", ans);



    return 0;
}