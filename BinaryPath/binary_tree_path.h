/*
 * binary_tree_path.h
 *
 *  Created on: 2015年8月17日
 *      Author: dahaol
 */

#ifndef BINARYPATH_BINARY_TREE_PATH_H_
#define BINARYPATH_BINARY_TREE_PATH_H_

#include <iostream>
#include <vector>

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) {
            std::vector<std::string> tmp = {};
            return tmp;
        }
        std::string tmp_str;
        HeapSearch(root, tmp_str);
        return binary_path_vec;
    }

    void HeapSearch(TreeNode* root, std::string path) {
        if (root == nullptr) {
            return;
        }

        path.append(to_string(root->val));
        path.append("->");
        if (root->left) {
            HeapSearch(root->left, path);
        }

        if (root->right) {
            HeapSearch(root->right, path);
        }

        if (root->left == nullptr && root->right == nullptr) {
            path.erase(path.length() - 2, 2);
            binary_path_vec.push_back(path);
        }

        return;
    }

private:
    std::vector<std::string> binary_path_vec = {};
};


#endif /* BINARYPATH_BINARY_TREE_PATH_H_ */
