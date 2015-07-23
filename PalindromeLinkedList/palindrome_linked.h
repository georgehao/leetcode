/*
 * palindrome_linked.h
 *
 *  Created on: 2015年7月22日
 *      Author: dahaol
 */

#ifndef PALINDROMELINKEDLIST__PALINDROME_LINKED_H_
#define PALINDROMELINKEDLIST__PALINDROME_LINKED_H_

#include <iostream>

//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        int total_node_num = 0;
        ListNode* p_tmp = head;
        while (p_tmp != nullptr) {
            total_node_num++;
            p_tmp = p_tmp->next;
        }

        int half_num = total_node_num / 2;
        bool is_have_another_one = (total_node_num % 2 == 0) ? false : true;

        ListNode* left_half_start_node = head;
        ListNode* right_half_start_node = head;
        int num = is_have_another_one ? (half_num + 1) : (half_num);
        for (int i = 0; i < num; i++) {
            right_half_start_node = right_half_start_node->next;
        }

        ListNode *new_right_half_start_node = reverseList(right_half_start_node);

        for (int i = 0; i < half_num; i++) {
            if (left_half_start_node == nullptr || new_right_half_start_node == nullptr)
                return false;

            if (left_half_start_node->val != new_right_half_start_node->val)
                return false;

            left_half_start_node  = left_half_start_node->next;
            new_right_half_start_node = new_right_half_start_node->next;
        }
        return true;
    }

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



#endif /* PALINDROMELINKEDLIST__PALINDROME_LINKED_H_ */
