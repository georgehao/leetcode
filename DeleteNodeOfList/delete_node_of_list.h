/*
 * delete_node_of_list.h
 *
 *  Created on: Sep 23, 2015
 *      Author: dahaol
 */

#ifndef DELETENODEOFLIST_DELETE_NODE_OF_LIST_H_
#define DELETENODEOFLIST_DELETE_NODE_OF_LIST_H_


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
    void deleteNode(ListNode* node) {
        if (node == nullptr) {
            return;
        }

        ListNode *p_tmp_node = node->next;
        node->val = p_tmp_node->val;
        node->next = p_tmp_node->next;
    }
};


#endif /* DELETENODEOFLIST_DELETE_NODE_OF_LIST_H_ */
