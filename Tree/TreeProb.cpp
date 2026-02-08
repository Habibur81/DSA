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

void traverseFun(treeNode* root, vector<int>& ans){
    if(root == NULL){
        return;
    }
    
    traverseFun(root->right, ans);
    ans.push_back(root->data);
    traverseFun(root->left, ans);
}


int main(){
    treeNode* root = new treeNode(10);
    root->left = new treeNode(20);
    root->right = new treeNode(30);
    root->left->left = new treeNode(1);
    root->left->right = new treeNode(2);
    root->left->right->left = new treeNode(4);
    root->left->right->right = new treeNode(5);

    treeNode* temp = root;
    vector<int> ans;

    traverseFun(temp, ans);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;


    return 0;
}