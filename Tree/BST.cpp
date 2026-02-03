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
    }else{
        cout << "Going right of " << root->data << " to insert " << val << endl;
        root -> right = insert(root -> right, val);
    }

    return root;
}

void inorder(node* root){

    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);

}

// void bfs(node* root){
//     queue<node*> q;
//     q.push(root);

//     while(!q.empty()){
//             root = q.front();
//             q.pop();
//             if(root != NULL){
//                 cout << root -> data << " ";
//                 q.push(root->left);
//                 q.push(root->right);
//             }
//     }

// }

void bfs(node* root){

    if(root == nullptr) return;
    
    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        cout << q.front()->data << " ";

        if(q.front() -> left != nullptr){
            q.push(q.front()->left);
        }
        
        if(q.front()->right != nullptr){
            q.push(q.front()->right);
        }
        
        q.pop();
        
    }

}


int main(){

   node* root = insert(nullptr, 20);
   insert(root, 10);
   insert(root, 30);
   insert(root, 5);
   insert(root, 15);

    inorder(root);
    cout << endl;
    bfs(root);

    return 0;
}