#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            next = NULL;
        }

        ~Node(){
            delete next;
        }
};

//my approse space complexity O(n)
bool CheckCycle(Node* &head){
    if(head == NULL || head->next == NULL){
        return false;
    }
    unordered_map <Node*, int> my_map;
    Node* temp = head;
    while(temp != NULL){
        if(my_map.find(temp) != my_map.end()){
            return true;
        }
        my_map[temp] = 1;
        temp = temp->next;
    }

    return false;
}

//third approach space complexity O(n)
bool CheckCycle(Node* &head){
    if(head == NULL || head->next == NULL){
        return false;
    }
    unordered_map <Node*, bool> my_map;
    Node* temp = head;
    while(temp != NULL){
        if(my_map.find(temp) != my_map.end()){
            return true;
        }
        my_map[temp] = true;
        temp = temp->next;
    }

    return false;
}

//space complexity O(1);
bool CheckCycle2(Node* &head){

    if(head == NULL || head->next == NULL){
        return false;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast!= NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) return true;
    }

    return false;

}

int main(){
    Node* head = new Node(2);
    Node* h1 = new Node(3);
    Node* h2 = new Node(4);

    head->next = h1;
    h1->next = h2;
    //h2->next = h1;
    //first approach
    bool result = CheckCycle(head);
    //second approach
    bool result2 = CheckCycle2(head);

    if(result2 == 1){
        cout << "circular" << endl;
    }else{
        cout << "not circular" << endl;
    }

    delete head;
    delete h1;
    delete h2;

    return 0;
}