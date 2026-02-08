#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* next;
        int val;
        Node(int n){
            val = n;
            next = NULL;
        }
};

// struct newNode
// {
//     public:
//         newNode* next;
//         int val;
//         newNode(int n){
//             val = n;
//             next = NULL;
//         }
// };

Node* addTwoNums(Node* l1, Node* l2){
    Node* dummyNode = new Node(0);
    Node* curr = dummyNode;
    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0){

        int x = (l1 != nullptr) ? l1->val : 0;
        int y = (l2 != nullptr) ? l2->val : 0;
        
        int sum = x + y + carry;

        carry = sum / 10;

        curr->next = new Node(sum % 10);

        curr = curr->next;

        l1 = (l1 != NULL) ? l1->next : NULL;
        l2 = (l2 != NULL) ? l2->next : NULL;
    }

    return dummyNode->next;
}


int main(){
        
    Node* l1 = NULL;
    Node* l2 = NULL;

    Node* n1 = new Node(2);
    Node* n2 = new Node(4);
    Node* n3 = new Node(3);

    l1 = n1; n1->next = n2; n2->next = n3;

    Node* n4 = new Node(5);
    Node* n5 = new Node(6);
    Node* n6 = new Node(4);

    l2 = n4; n4->next = n5; n5->next = n6;

    Node* result = addTwoNums(l1, l2);

    Node* itNode = result;

    while(itNode != NULL){
        cout << itNode->val << " " << endl;
        itNode = itNode->next;
    }

        
    return 0;
}