/*
 * same_tree.h
 *
 *  Created on: Oct 16, 2015
 *      Author: dahaol
 */

#ifndef SAMETREE_SAME_TREE_H_
#define SAMETREE_SAME_TREE_H_

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }

        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr)) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        if (p ->left == nullptr && p->right == nullptr && q->left == nullptr && q->right == nullptr) {
            return true;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

#endif /* SAMETREE_SAME_TREE_H_ */
