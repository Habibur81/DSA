#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
        ~Node(){
            int value = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory free for " << value << endl;
        }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    // tail = temp -> next;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){    
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp-> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* inAtPos = new Node(d);
    inAtPos -> next = temp -> next;
    temp -> next = inAtPos;

}

void DeleteNode(Node* &head, Node* &tail, int position){

    Node* temp = head;
    int cnt = 1;

    if(position == 1){

        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }else{

        Node* curr = head;
        Node* prev = NULL;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        if(prev-> next ==  NULL){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

void NodeDeleteByValue(Node* &head, Node* &tail, int value){

    Node* temp = head;
    if(temp -> data == value){
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;
        if(prev -> next == NULL){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

Node* Recursion2(Node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* head2 = Recursion2(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return head2;

}

void revbyrecur(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    revbyrecur(head, forward, curr);
    curr -> next = prev;

}

Node* reverseList(Node* &head){

    return Recursion2(head);

    // if(head == NULL || head -> next == NULL){
    //     return head;
    // }

    // Node* prev = NULL;
    // Node* curr = head;
    // Node* forward = NULL;

    //revbyrecur(head, curr, prev);

    // while (curr != NULL)
    // {
    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
        
    // }

    // return prev;
}

int LengthOfNode(Node* &head){
    int len = 0;
    while(head != NULL){
        head = head -> next;
        len++;
    }

    return len;
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

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);
    insertAtTail(tail, 5);
    insertAtTail(tail, 2);
    insertAtPosition(head, tail, 4, 7);

    Node* temp = head;    
    
    int len = LengthOfNode(head);
    int mid = len / 2;
    int cnt = 0;

    while (cnt < mid)
    {
        temp = temp -> next;
        cnt++;
    }
    
    return 0;
}