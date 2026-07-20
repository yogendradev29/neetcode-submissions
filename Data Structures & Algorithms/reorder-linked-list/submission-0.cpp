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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        vector<ListNode*>node;
        ListNode* temp=head;
        while(temp!=nullptr){
            node.push_back(temp);
            temp=temp->next;
        }
        int left=0,right=node.size()-1;
        while(left<right){
            node[left]->next=node[right];
            left++;
            node[right]->next=node[left];
            right--;
        }
        node[left]->next=nullptr;
    }
};
