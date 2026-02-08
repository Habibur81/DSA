#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    
}

bool search(Node* head, int val){
    
    Node* temp = head;
    
    while(temp != NULL){
        
        if(temp->data == val){
           return true; 
        }
        
        temp = temp->next;
    }
    
    return false;
}

void update(Node* &head, int oldval, int newval){
    
    Node* temp = head;
    
    while(temp != NULL){
        if(temp->data == oldval){
            temp->data = newval;
            return;
        }
        
        temp = temp->next;
    }
    
}

void deleteNode(Node* &head, int val){
    
    if(head == NULL)    return;
    
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    
    while(temp != NULL && temp->data != val){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL) return;
    
    prev->next = temp->next;
    
    delete temp;
}

void print(Node* head){
    
    if(head == NULL){
       cout << "head is NULL" <<endl;
    }
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Node* head = NULL;
    
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    
    insertAtTail(head, 40);
    insertAtHead(head, 50);
    
    // update(head, 40, 100);
    // update(head, 10, 200);
    // update(head, 20, 300);
    
    //print(head);
    
   deleteNode(head, 30);
   print(head);
    
    // bool vari = search(head, 100);
    
    // if(vari == 1){
    //     cout << "True" << endl;
    // }else{
    //     cout << "False" << endl;
    // }
    
    //print(head);

    return 0;
}