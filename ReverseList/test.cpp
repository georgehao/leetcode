/*
 * test.cpp
 *
 *  Created on: 2015年7月13日
 *      Author: dahaol
 */

#include "reverse_list.h"

int main()
{
    Solution s;
    ListNode *head = new ListNode(1);

    ListNode *tmp = head;
    ListNode *new_node = nullptr;
    for (int i = 2; i < 5; i++) {
        new_node = new ListNode(i);
        tmp->next = new_node;
        tmp = tmp->next;
    }


    tmp = head;
    while (tmp) {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;

    ListNode *reverse = s.reverseList(head);

    tmp = reverse;
    while (tmp) {
      std::cout << tmp->val << " ";
      tmp = tmp->next;
    }
    std::cout << std::endl;
}

