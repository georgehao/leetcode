/*
 * LCA.h
 *
 *  Created on: 2015年7月21日
 *      Author: dahaol
 */

#ifndef LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_LCA_H_
#define LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_LCA_H_

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || p == nullptr || q == nullptr)
            return nullptr;

        if (root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else if (root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        return root;
    }
};



#endif /* LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_LCA_H_ */
