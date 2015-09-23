/*
 * max_depth_of_tree.h
 *
 *  Created on: Sep 23, 2015
 *      Author: dahaol
 */

#ifndef MAXIMUMDEPTHOFBINARYTREE_MAX_DEPTH_OF_TREE_H_
#define MAXIMUMDEPTHOFBINARYTREE_MAX_DEPTH_OF_TREE_H_

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int each_depth_of_path = 0;
        DepthBinarySearch(root, each_depth_of_path);
        return max_depth_of_tree;
    }

private:
    void DepthBinarySearch(TreeNode *p_root, int each_depth_of_path) {
        if (!p_root) {
            return;
        }

        //std::cout << p_root->val << std::endl;

        each_depth_of_path++;

        if (p_root->left) {
            DepthBinarySearch(p_root->left, each_depth_of_path);
        }

        if (p_root->right) {
            DepthBinarySearch(p_root->right, each_depth_of_path);
        }

        if (p_root->left == nullptr && p_root->right == nullptr) {
            if (each_depth_of_path > max_depth_of_tree) {
                max_depth_of_tree = each_depth_of_path;
            }
        }
    }
private:
    int max_depth_of_tree = 0;
};



#endif /* MAXIMUMDEPTHOFBINARYTREE_MAX_DEPTH_OF_TREE_H_ */
