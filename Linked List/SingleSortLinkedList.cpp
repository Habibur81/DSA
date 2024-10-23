#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int val;
        Node *next;
        
        Node(int Val){
            this->val = Val;
            this->next = NULL;
        }
    };


    void printList(Node *head){
        while (head != NULL){
            cout << head->val << " ";
            head = head->next;
        }

        cout << endl;
    }


Node *findMiddle(Node *head){
    if (head == NULL)
        return head;
    
    Node *slow = head, *fast = head;
    
    while (fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    //cout << slow -> val << endl;
    return slow;
}


Node *mergeSorted(Node *left, Node *right){

    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    Node *res = NULL;

    if (left->val <= right->val){
        res = left;
        res->next = mergeSorted(left->next, right);
        
    }else {
        // Assigning right to res->
        res = right;
        res->next = mergeSorted(left, right->next);
        
    }

    return res;
}



Node *mergeSort(Node *head){

    if (head == NULL || head->next == NULL){
        return head;
    }

    Node *mid = findMiddle(head);

    Node *nextToMid = mid->next;

    mid->next = NULL;

    Node *left = mergeSort(head);
    Node *right = mergeSort(nextToMid);

   Node *res = mergeSorted(left, right);

   return res;
}



int main(){

    // 4 --> 3 --> 2 --> 5 --> 1 --> NULL
    Node *head = new Node(4);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    
   // cout << "List before sorting - " << endl;
    //printList(head);

    head = mergeSort(head);

    cout << head->next->next->val << endl;
 
    

    return 0;
}