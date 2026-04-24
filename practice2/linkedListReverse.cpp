#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(int n){
            val = n;
            next = nullptr;
        }
};

ListNode* reverseList(ListNode* head){
    ListNode *prev = nullptr, *curr = head, *next = nullptr;

    while (curr != nullptr)
    {
        // 4->6->8->nullptr n = 6->8->nullptr; curr->next=nullptr; prev = 4-> curr=6->8->null;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }

    return prev;
    
}

int main(){
    ListNode* Node;
    Node = new ListNode(4);
    Node->next = new ListNode(6);
    Node->next->next = new ListNode(8);

    ListNode* RevNode = reverseList(Node);

    while(RevNode != nullptr){
        cout << RevNode->val << " ";
        RevNode = RevNode->next;
    }

    return 0;
}