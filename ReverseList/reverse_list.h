/*
 * reverse_list.h
 *
 *  Created on: 2015年7月13日
 *      Author: dahaol
 */

#ifndef REVERSELIST_REVERSE_LIST_H_
#define REVERSELIST_REVERSE_LIST_H_
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return  head;

        ListNode *reverse_head = nullptr;
        ListNode *tmp_node = head;
        ListNode *tmp_prev = nullptr;
        while (tmp_node) {
            tmp_prev = reverse_head;
            reverse_head = tmp_node;
            tmp_node = tmp_node->next;
            reverse_head->next = tmp_prev;
        }
        return reverse_head;
    }
};

#endif /* REVERSELIST_REVERSE_LIST_H_ */
