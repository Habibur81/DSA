#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        //property of class   
        int data;
        TreeNode* left;
        TreeNode* right;
        // contructor or method of class that is called when create class object. No need called manually.
        TreeNode(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }

};

//Class type Method and arrgument of class type.
TreeNode* createTree(TreeNode* root){
    cout << "Enter data for node: ";
    int data;
    cin >> data;  
    
    if(data == -1){
        return NULL;
    } 
    root = new TreeNode(data); // create a node of root. root has left pointer and right pointer and a data.

    
    cout << "Enter data the node left of " << data << endl;
    root->left = createTree(root->left); 
    cout << "Enter data the node right of " << data << endl;
    root->right = createTree(root->right); 

    return root;
}

vector<int> PostOrder(TreeNode* root){
    vector<int>result;
    if(root == NULL){
        return result;
    }
    
    
    PostOrder(root->left);
    PostOrder(root->right);

    result.push_back(root->data);

    return result;
}

int main(){
    TreeNode* root = NULL; // Just a pointer of class TreeNode;

    root = createTree(root);

    vector<int>result;

    result = PostOrder(root);

    reverse(result.begin(), result.end());

    for(int i : result){
        cout << i << " ";
    }



    return 0;
}