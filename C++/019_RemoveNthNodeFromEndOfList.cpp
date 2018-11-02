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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* p = head;
        while(p){
            len++;
            p = p -> next;
        }
        p = head;
        if(n == len){
            head = head -> next;
            delete p;
            return head;
        }
        for(int i = 1; i < len - n; i++){
            p = p -> next;
        }
        ListNode* q = p -> next;
        p -> next = q -> next;
        delete q;
        return head;
    }
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode newhead(0);
        newhead.next = head;
        ListNode *p = &newhead, *q = &hewhead;
        for(int i = 0; i <= n; i++){
            p = p -> next;
        }
        while(p){
            p = p -> next;
            q = q -> next;
        }
        q -> next = q -> next -> next;
        return newhead.next;
    }
};

/*
    解法二用了双指针，中间间隔出相应的距离所以只需要一次遍历，
    最好的是自己设置了一个头指针，避免了第一个节点的特殊处理。
*/