/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ans = (struct ListNode *)malloc(sizeof(struct ListNode));
    ans -> val = 0;
    ans -> next = NULL;
    struct ListNode *p = ans;
    int rest = 0;
    while(l1 || l2 || rest){
        int tp = (l1 ? l1 -> val : 0) + ( l2 ? l2 -> val : 0);
        p -> next = (struct ListNode *)malloc(sizeof(struct ListNode));
        p = p -> next;
        p -> val = (tp  + rest) % 10;
        rest = (tp + rest) / 10;
        p -> next = NULL;
        l1 = l1 ? l1 -> next : NULL;
        l2 = l2 ? l2 -> next : NULL;
    }
    return ans -> next;
}

/*
    第一次做，答案做会多一个数值，不知道为啥我在返回前将即第24行设置了p = NULL, 感觉应该不会再多最后一个数了，但是它就是多了。
    所以干脆舍弃第一个数，转而使用最后一个数值，便不会出现这样的问题。
*/