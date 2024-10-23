#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this -> data = val;
            this -> next = NULL;
        }
};

Node* midOfList(Node* head){
    if(head == NULL){
        return head;
    }

    Node *fast = head;
    Node *slow = head;

    while(fast->next != NULL && fast->next->next != NULL ){
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;
}

Node* mergeSorted(Node* first, Node* second){
    if(first == NULL){
        return first;
    }
    if(second == NULL){
        return second;
    }

    Node* res = NULL;

    if(first->data <= second->data){
        res = first;
        res -> next = mergeSorted(first->next, second);
    }else{
        res = second;
        res -> next = mergeSorted(first, second->next);
    }

    return res;

}

Node* mergeSort(Node* head){
    if(head == NULL ||  head -> next == NULL){
        return head;
    }

    Node* mid = midOfList(head);
    Node* midNext = mid -> next;
    mid->next = NULL;

    Node* first = mergeSort(head);
    Node* second = mergeSort(midNext);

    Node* res = mergeSorted(first, second);

    return res;

}



int main(){

    Node* head = new Node(4);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    head =  mergeSort(head);

    return 0;
}