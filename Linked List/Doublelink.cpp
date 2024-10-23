#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
            this -> prev = NULL;
        }

        ~Node(){
            int value = this -> data;
            while(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory free for " << value << endl;
        }
    
};

void insertAtHead(Node* &head, Node* &tail, int d){
    
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }    
}

void insertAtTail(Node* &tail, Node* &head, int d){
    
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = tail -> next;
    }

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    Node* addToPosition = new Node(d);
    int cnt = 1;

    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    addToPosition -> next = temp -> next;
    temp -> next -> prev = addToPosition;    
    temp -> next = addToPosition;
    addToPosition -> prev = temp;
    
}

void DeleteNode(Node* &head, Node* &tail, int position){

    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;        
        delete temp; 
    }else{
        int cnt = 1;
        Node* curr = head;
        Node* pre = NULL;

        while (cnt < position)
        {        
            pre = curr;    
            curr = curr -> next;    
            cnt++;
        }
        
        curr -> prev = NULL;       
        pre -> next = curr -> next; 
        if(pre -> next == NULL){
            tail = pre;
        } 
        curr -> next = NULL;
        delete curr;     
        
    }

    
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}

int main(){

    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 60);
    insertAtTail(tail, head, 1);
    print(head);
    DeleteNode(head, tail, 1);
    print(head);

    return 0;
}