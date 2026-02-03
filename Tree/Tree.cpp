#include<bits/stdc++.h>
using namespace std;

class CNode{
    public:
        int data;
        CNode* left;
        CNode* right;
        CNode(int n){
            data = n;
            left = right = NULL;
        }
        
        ~CNode(){
            delete left;
            delete right;
        }

};

struct SNode{
    public:
        int data;
        SNode* left;
        SNode* right;
        SNode(int n){
            data = n;
            left = right = NULL;
        }

        ~SNode(){
            delete left;
            delete right;
        }
};

void preorder(CNode* root){
    if(root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(CNode* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(CNode* root){
    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

void bfs(CNode* root){
    if(root == nullptr) return;

    queue<CNode*> q;
    q.push(root);

    while(!q.empty()){
        
        CNode* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

void inorderst(CNode* root){
    stack<CNode*> st;
    CNode* curr = root;

    while(curr !=nullptr || !st.empty()){
        while(curr != nullptr){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        
        curr = curr->right;
         
    }

}

void preorderst(CNode* root){
    stack<CNode*> st;
    st.push(root);

    while(!st.empty()){
        CNode* curr = st.top();
        st.pop();
        cout << curr->data << " ";
        st.push(curr->right);
        st.push(curr->left);
    }   
}



int main(){
    CNode* root = new CNode(1);
    root->left = new CNode(2);
    root->right = new CNode(3);
    root->left->left = new CNode(4);
    root->right->right = new CNode(5);

    // inorder(root);
    // cout << endl;
    // preorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    // bfs(root);

    inorderst(root);

   // preorderst(root);

}