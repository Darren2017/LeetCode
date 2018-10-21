/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}s
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL){
			return l2;
        }
		if (l2 == NULL){
			return l1;
        }

        ListNode *L = NULL, *p = L;

        if(l1 -> val < l2 -> val){
            p = l1;
            l1 = l1 -> next;
        }else{
            p = l2;
            l2 = l2 -> next;
        }

        while(l1 && l2){
            if(l1 -> val < l2 -> val){
                p ->next = l1;
                p = p -> next;
                l1 = l1 -> next;
            }else{
                p ->next = l2;
                p = p -> next;
                l2 = l2 -> next;
            }
        }
        if(l1){
            p -> next = l1;
        }else{
            p -> next = l2;
        }
        return L;
    }
};

/*
    首先是考虑边界情况：是否为空，其次注意的是可以直接使用已有的两个链表，不需要申请新的内存。
    与数组归并的区别是，最后的部分可以直接链上去不需要用循环。
*/