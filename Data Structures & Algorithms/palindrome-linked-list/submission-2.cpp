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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp1=head;
        while(temp1!=nullptr){
            st.push(temp1->val);
            temp1=temp1->next;
        }

      ListNode* temp2=head;
      while(temp2!=0){
        if(temp2->val!=st.top()){
            return false;
            
        }
        st.pop();
        temp2=temp2->next;
      }
      return st.empty();
    }
};