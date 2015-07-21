/*
 * intersection_node.h
 *
 *  Created on: 2015年7月21日
 *      Author: dahaol
 */

#ifndef INTERSECTIONOFTWOLINKEDLISTS_INTERSECTION_NODE_H_
#define INTERSECTIONOFTWOLINKEDLISTS_INTERSECTION_NODE_H_

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr)
            return nullptr;

        int headA_len = 0;
        int headB_len = 0;

        ListNode* tmp1 = headA;
        while (tmp1 != nullptr) {
            headA_len++;
            tmp1 = tmp1->next;
        }

        ListNode *tmp2 = headB;
        while (tmp2 != nullptr) {
            headB_len++;
            tmp2 = tmp2->next;
        }

        tmp1 = headA;
        tmp2 = headB;

        int count = headA_len - headB_len;
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                tmp1 = tmp1->next;
            }
        } else if (count < 0) {
            for (int i = 0; i < -count; i++) {
                tmp2 = tmp2->next;
            }
        }

        int cicle_count = (count > 0) ? headA_len : headB_len;
        for (int i = 0; i < cicle_count; i++) {
            if (tmp1 == tmp2)
                return tmp1;

            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        return nullptr;
    }
};



#endif /* INTERSECTIONOFTWOLINKEDLISTS_INTERSECTION_NODE_H_ */
