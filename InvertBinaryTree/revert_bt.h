/*
 * revert_bt.h
 *
 *  Created on: 2015年7月14日
 *      Author: dahaol
 */

#ifndef INVERTBINARYTREE_REVERT_BT_H_
#define INVERTBINARYTREE_REVERT_BT_H_

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//#define RECURSIVE
#ifdef RECURSIVE

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return nullptr;
        TreeNode* tmp_node = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(tmp_node);
        return root;
    }
};

#else
#include <queue>
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {
            return nullptr;
        }

        buffer_.push(root);
        while (!buffer_.empty()) {
           TreeNode *top_node = buffer_.front();
           buffer_.pop();
           if (top_node) {
               TreeNode *tmp = top_node->left;
               top_node->left = top_node->right;
               top_node->right = tmp;

               buffer_.push(top_node->left);
               buffer_.push(top_node->right);
           }
        }
        return root;
    }
private:
    std::queue<TreeNode*> buffer_;
};
#endif


#endif /* INVERTBINARYTREE_REVERT_BT_H_ */
