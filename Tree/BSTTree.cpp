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

        void inorder(node* root){
            if(root == NULL){
                return;
            }
            inorder(root -> left);
            cout << root -> data << " ";
            inorder(root -> right);
            
        }
};

int main(){
    node* root = nullptr;
    root = new node(5);
    root -> left = new node(3);
    root -> right = new node(7);

    root -> inorder(root);


    return 0;
}