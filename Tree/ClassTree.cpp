#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }

        ~Node(){
            delete left;
            delete right;
        }

};

int main(){

    Node* root = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);

    root->left = first;
    root->right = second;
    first->left = third;

    while (root != NULL)
    {
        cout << root->data << endl;
        root = root->right;
    }
    


    return 0;
}