#include <bits/stdc++.h>
using namespace std;

class LinkedNode{
    public:
        int data;
        LinkedNode* next;
        LinkedNode(int data){
            this->data = data;
            this->next = nullptr;
        }
};

void insertAtHead(LinkedNode* &root, int val){
    LinkedNode* newNode = new LinkedNode(val);
    newNode->next = root;
    root = newNode;
}

void insertAtTail(LinkedNode* &root, int val){
    LinkedNode* newNode = new LinkedNode(val);
    if(!root){
        root = newNode;
        return;
    }
    LinkedNode* temp = root;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteFromHead(LinkedNode* &root){
    if(!root) return;
    LinkedNode* temp = root;
    root = root->next;
    delete temp;
}

void deleteFromTail(LinkedNode* &root){
    if(!root) return;
    
    if(!root->next){
        delete root;
        root = nullptr;
        return;
    }
    
    LinkedNode* temp = root;
    while(temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void print(LinkedNode* root){
    LinkedNode* temp = root;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
   

int main() {
    LinkedNode* root = nullptr;
    insertAtTail(root, 5);
    insertAtTail(root, 10);
    insertAtTail(root, 30);
    insertAtHead(root, 10);
    insertAtHead(root, 20);
    insertAtHead(root, 30);
    insertAtHead(root, 40);
    
   // deleteFromHead(root);
    deleteFromTail(root);
   
    print(root);
    return 0;
}