#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            this -> data = d;
            this -> next = NULL;
        }
        ~Node(){
            int value = this -> data;
            while(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Free Memory for " << value << endl; 
        }
};

void insertNode(Node* &tail, int ele, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }else{
        Node* curr = tail;
        while(curr -> data != ele){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail, int value){

    if(tail == NULL){
        cout << "Link list is empty" << endl;
    }else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while (curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        if(curr == prev){
            tail = NULL;
        }else if(tail == curr){
            tail = curr -> next;
        }
        
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while (temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;
    
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
        
    map<Node*, bool> visited;
    Node* temp = head;

    while (temp != NULL)
    {
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
    
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "Linked list is empty " << endl;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);

    cout << endl;
}

int main(){

    Node* tail = NULL;

    insertNode(tail, 0, 10);
    insertNode(tail, 10, 20);
    insertNode(tail, 20, 30);
    insertNode(tail, 30, 40);
    insertNode(tail, 40, 50);

    if(detectLoop(tail)){
        cout << "link list is loop" << endl;
    }else{
        cout << "Not link list is not loop" << endl;
    }

    //deleteNode(tail, 10);
    //print(tail);

    return 0;
}