#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            this -> data = val;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};


node* insert(node* root, int val){
    if(root == nullptr){
        cout << "Inserting " << val << " as a new node." << endl;
        root = new node(val);
        return root;
    }

    if(val < root -> data ){
        cout << "Going left of " << root->data << " to insert " << val << endl;
        root -> left = insert(root -> left, val);
    }
    else{
        cout << "Going right of " << root->data << " to insert " << val << endl;
        root -> right = insert(root -> right, val);
    }
    return root;
}
