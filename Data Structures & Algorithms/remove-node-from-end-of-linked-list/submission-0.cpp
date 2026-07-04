/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
         count++;
         temp=temp->next;
        }
        if(count==n){
            ListNode* todelete=head;
            head=head->next;
            delete todelete;
            return head;
        }
        int move=count-n;
        ListNode* temp2=head;
        while(move>1){
        temp2=temp2->next;
        move--;
        }
        ListNode* todelete=temp2->next;
        temp2->next=temp2->next->next;
        delete todelete;

        return head;
    }
};
