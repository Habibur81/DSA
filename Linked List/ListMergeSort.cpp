#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};

Node* midNode(Node* head){

    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
   
    return slow;
}

Node* merge(Node* left, Node* right){

    if(left == NULL) return right;
    if(right == NULL) return left;

    // Node* result;
    // if(left != NULL && right != NULL){
    //     result = left;
    //     result->next = merge(left->next, right);
    // }else{
    //     result = right;
    //     result->next = merge(left, right->next);
    // }

    // return result;

    Node* resNode = new Node(-1);
    Node* temp = resNode;

    while (left != NULL && right != NULL)
    {
        if(left->data <= right->data){
            temp->next = left;
            temp = temp->next;
            left = left->next;
        }else{
            temp->next = right;
            temp = temp->next;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = temp->next;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = temp->next;
        right = right->next;
    }
    
    return resNode->next;
    

}

Node* mergeSort(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* mNode = midNode(head);
    Node* left = head;
    Node* right  = mNode->next;
    mNode->next = NULL;

   left = mergeSort(left);
   right = mergeSort(right);

   Node* result = merge(left, right);  

   return result;

}

int main(){

    Node* head = new Node(10);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(7);
    head->next->next->next->next->next = new Node(4);

    Node* sortResult = mergeSort(head);

    while(sortResult != NULL){
        cout << sortResult->data << endl;
        sortResult = sortResult->next;
    }

    return 0;
}