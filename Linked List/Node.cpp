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
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    Node* addInPosition = new Node(d);

    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp == NULL){
        insertAtTail(tail, d);
        return;
    }

    addInPosition -> next = temp -> next;
    temp -> next = addInPosition;


}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

}



int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtTail(tail, 5);
    insertAtTail(tail, 2);

    print(head);


    return 0;
}