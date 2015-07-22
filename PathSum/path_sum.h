/*
 * path_sum.h
 *
 *  Created on: 2015年7月21日
 *      Author: dahaol
 */

#ifndef PATHSUM_PATH_SUM_H_
#define PATHSUM_PATH_SUM_H_

#include <iostream>

 // Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        DFS(root, sum);
        if (is_equal_sum)
            return true;
        else
            return false;
    }
#if 0
    bool DFS(TreeNode* root, int sum) {
        if (root == nullptr)
            return false;

        count += root->val;
        if (root->left == nullptr && root->right == nullptr && sum == count) {
            is_equal_sum = true;
            return true;
        }

        if (root->left) {
            DFS(root->left, sum);
        }

        if (root->left != nullptr) {
            count -= root->left->val;
        }

        if (root->right) {
            DFS(root->right, sum);
        }

        if (root->right != nullptr) {
            count -= root->right->val;
        }
        return false;
    }
#else
    bool DFS(TreeNode* root, int sum) {
        if (root == nullptr)
            return false;

        sum -= root->val;
        if (root->left == nullptr && root->right == nullptr) {
            is_equal_sum = (sum == 0) ? true : false;
            return true;
        }

        if (root->left) {
            DFS(root->left, sum);
        }

        if (root->right) {
            DFS(root->right, sum);
        }
        return false;
    }
#endif

private:
    bool is_equal_sum = false;
#if 0
    int count = 0;
#endif
};

#endif /* PATHSUM_PATH_SUM_H_ */
