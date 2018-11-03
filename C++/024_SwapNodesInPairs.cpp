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
    void swap(ListNode* &p){
        if(p -> next && p -> next -> next){
            ListNode *tem = p -> next, *q = p -> next -> next;
            p -> next = q;
            tem -> next = q -> next;
            q -> next = tem;
        }
    }

    ListNode* swapPairs(ListNode* head) {
        ListNode newhead(0);
        newhead.next = head;
        ListNode *p = &newhead;
        while(p){
            if(p && p -> next && p -> next -> next){
                swap(p);
                p = p -> next -> next;
            }else{
                break;
            }
        }
        return newhead.next;
    }
};

/*
    依然是自己设置一个头节点好用。
*/