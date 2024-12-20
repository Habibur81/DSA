#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:

        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

TreeNode* CreateTree(TreeNode* root){
    cout << "Enter data: ";
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    } 

    root = new TreeNode(data);
    cout << "Enter data of left child " << data <<":" << endl;
    root->left = CreateTree(root->left);
    cout << "Enter data of right child " << data <<":" << endl; 
    root->right = CreateTree(root->right);

}

//BFS
void levelOrderSearch(TreeNode* root){
    queue<TreeNode*>bfs_q;
    bfs_q.push(root);
    bfs_q.push(NULL);

    while (!bfs_q.empty())
    {
        TreeNode* temp = bfs_q.front();
        bfs_q.pop();

        if(temp == NULL){
            cout << endl;
            if(!bfs_q.empty()){
                bfs_q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->right){
                bfs_q.push(temp->right);
            }
            if(temp->left){
                bfs_q.push(temp->left);
            }
             
        }

        // if(temp->left){
        //     bfs_q.push(temp->left);
        // }
        // if(temp->right){
        //     bfs_q.push(temp->right);
                
        // } 
        
    }
    
}
//PreOrder
void PreOrder(TreeNode* root){
    if(root ==  NULL){
        return;
    }

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);

}

//InOrder
void InOrder(TreeNode* root){
    if(root ==  NULL){
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

//PostOrder
void PostOrder(TreeNode* root){
    if(root ==  NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void levelSearch(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}

int main(){
    TreeNode* root = NULL;
    root = CreateTree(root);
    //1 2 -1 -1 3 -1 -1
   // levelOrderSearch(root);
  // PostOrder(root);

  levelSearch(root);

    return 0;
}