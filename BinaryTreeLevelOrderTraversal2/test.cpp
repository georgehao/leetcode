/*
 * test.cpp
 *
 *  Created on: Jul 3, 2015
 *      Author: dahaol
 */
#include <string.h>
#include <stdlib.h>
#include "binary_tree_traversal.h"

int i = 0;
int data[] = {1, 2, 0, 0, 3, 4, 0, 0, 5, 0, 0};

TreeNode* Create(TreeNode*& node, int data[])
{
	int value = data[i++];
	if (value == 0) {
		node = NULL;
	} else {
		node = new TreeNode();
		if (node == NULL)  {
			std::cout << "create error" << std::endl;
			return nullptr;
		}
		node->val = value;
		node->left = Create(node->left, data);
		node->right = Create(node->right, data);
	}
	return node;
}

void PostOrderTraverse(TreeNode* t)
{
    if(t != NULL)
    {
        PostOrderTraverse(t->left);
        printf("%d\n", t->val);
        PostOrderTraverse(t->right);
    }
}

int main()
{
    TreeNode_T *root = nullptr;
    Create(root, data);

    PostOrderTraverse(root);
    std::cout << std::endl;

    Solution s;
    s.levelOrderBottom(root);
    return 0;

}
