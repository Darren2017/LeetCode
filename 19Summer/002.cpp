/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans  = new ListNode(0);
        ListNode* p = ans;
        ListNode* next;
        int temp = 0;
        while(l1 && l2){
            next = new ListNode((l1 -> val + l2 -> val + temp) % 10);
            p -> next = next;
            temp = (l1 -> val + l2 -> val + temp) / 10;
            p = p -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        while(l1){
            next = new ListNode((l1 -> val + temp) % 10);
            p -> next = next;
            temp = (l1 -> val + temp) / 10;
            p = p -> next;
            l1 = l1 -> next;
        }
        while(l2){
            next = new ListNode((l2 -> val + temp) % 10);
            p -> next = next;
            temp = (l2 -> val + temp) / 10;
            p = p -> next;
            l2 = l2 -> next;
        }
        
        if(temp){
            p -> next = new ListNode(1);
        }
        return ans -> next;
    }
};