class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        // 1. Establish the 'n' node gap correctly (1 step at a time)
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        
        // 2. Check for the head deletion edge case IMMEDIATELY
        if (fast == nullptr) {
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }
        
        // 3. Move until fast reaches the LAST node (fast->next == nullptr)
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        
        // 4. slow is now right before the target node
        ListNode* todelete = slow->next;
        slow->next = slow->next->next;
        delete todelete;
        
        return head;
    }
};