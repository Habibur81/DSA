#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void insertAtHead(Node* &Head, int val){
    Node* newNode = new Node(val);
    newNode->next = Head;
    Head = newNode;
}

void insertInPositon(Node* &Head, int posi, int val){

    if(posi == 1){
        Node* newNode = new Node(val);
        Node* tem = Head;
        Head = newNode;
        Head->next = tem;
        return;
    }
    Node* tem = Head;

    for(int i = 1; i < posi - 1; i++){
        tem = tem->next;
    }

    Node* newNode = new Node(val);

    newNode->next = tem->next;
    tem->next = newNode;
}


int main(){
    
    Node* Head = NULL;

    Node* FNode = new Node(3);
    Node* SNode = new Node(5);
    Node* TNode = new Node(9);

    Head = FNode;
    FNode->next = SNode;
    SNode->next = TNode;

    insertInPositon(Head, 2, 10);


    

    insertAtHead(Head, 2);

    Node* temNode = Head;

    while (temNode!=NULL)
    {
        cout << temNode->data << " ";
        temNode = temNode->next;
    }
    cout << endl;
            
    return 0;
}