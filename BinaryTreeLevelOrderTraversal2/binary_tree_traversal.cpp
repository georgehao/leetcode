/*
 * binary_tree_traversal.cpp
 *
 *  Created on: Jul 3, 2015
 *      Author: dahaol
 */

#include "binary_tree_traversal.h"
#include <assert.h>

Solution::Solution()
{
}

std::vector<std::vector<int>>
Solution::levelOrderBottom(TreeNode* root)
{
	std::vector<std::vector<int>> res_vec;
	res_vec.clear();

	BreadthFirstSearch(root);
	if (buffer_stack.empty()) {
		return res_vec;
	}

	std::vector<int> layer_vec;

	while (!buffer_stack.empty()) {
		auto it = buffer_stack.top();
		buffer_stack.pop();
		if (it.type != Type::Separtor && it.type != Type::Value) {
			assert(false);
		}

		if (it.type == Type::Value) {
			layer_vec.push_back(it.val);
		} else {
			res_vec.push_back(layer_vec);
			layer_vec.clear();
		}
	}
	//flush the root node to res_vec
	res_vec.push_back(layer_vec);

	for (auto it = res_vec.begin(); it != res_vec.end(); it++) {
		for (auto iter = it->begin(); iter != it->end(); iter++) {
			std::cout << *iter << " ";
		}
		std::cout << std::endl;
	}
	return res_vec;
}

void Solution::BreadthFirstSearch(TreeNode* root)
{
	/*
	 * Note:
	 * Just for output
  	 * 	  	  [15,7],
  	 *	  	  [9,20],
  	 * 	  	  [3]
	 *
	 * I insert a '#' separator for layer
	 */
	if (!root) {
		return;
	}

	assist_queue.push(root);
	assist_queue.push(NULL);
	Value_T value(Type::Value, 0);
	Value_T separator(Type::Separtor, 0);

	while (!assist_queue.empty()) {
		TreeNode_T *top_node = assist_queue.front();
		assist_queue.pop();

		if (top_node != NULL) {
			//insert val
			value.val = top_node->val;
			buffer_stack.push(value);

			if (top_node->right) {
				assist_queue.push(top_node->right);
			}

			if (top_node->left) {
				assist_queue.push(top_node->left);
			}
		} else {
			if (!assist_queue.empty()) {
				buffer_stack.push(separator);
				assist_queue.push(NULL);
			}
		}
	}
}

