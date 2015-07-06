/*
 * binary_tree_traversal.h
 *
 *  Created on: Jul 3, 2015
 *      Author: dahaol
 */

#ifndef BINARY_TREE_TRAVERSAL_H_
#define BINARY_TREE_TRAVERSAL_H_

#include <queue>
#include <stack>
#include <iostream>

typedef struct TreeNode {
	//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	int val;
	TreeNode *left;
	TreeNode *right;
} TreeNode_T;

enum class Type : int {
	Separtor = 0,
	Value
};

typedef struct Value {
	Value(Type t, int v) : type(t), val(v) {}

	Type type;
	int val;
} Value_T;

class Solution {
public:
	Solution();
    std::vector<std::vector<int>> levelOrderBottom(TreeNode* root);

private:
    void BreadthFirstSearch(TreeNode* root); // breadth First Search

private:
    std::stack<Value_T> 		buffer_stack; 	   //for store the resulte
    std::queue<TreeNode_T *> 	assist_queue;  //for bianry tree traversal
};


#endif /* BINARY_TREE_TRAVERSAL_H_ */
