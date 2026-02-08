class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            //second approach recursive
            if (head == nullptr || head->next == nullptr){
               return head;
            }
    
            ListNode* newHead = reverseList(head->next);
    
            head->next->next = head;
            head->next = nullptr;
    
            return newHead;
    
            //first approach
    
            // if(head == nullptr || head->next == nullptr) return head;
    
            // ListNode* temp = head;
            // ListNode* curr = nullptr;
            // ListNode* prev = nullptr;
    
            // while(temp != nullptr){
            //    ListNode* newNode = temp->next;
            //     curr = temp;
            //     curr->next = prev;
            //     prev = curr;       
            //     temp = newNode;     
            // }
    
            // return prev;
    
            
        }
    };