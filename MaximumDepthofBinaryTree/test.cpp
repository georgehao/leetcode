/*
 * test.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: dahaol
 */

#include <iostream>
#include "max_depth_of_tree.h"
using namespace std;

int main()
{
    TreeNode root(3);
    TreeNode left9(9);
    TreeNode right20(20);
    TreeNode left15(15);
    TreeNode right7(7);

    root.left = &left9;
    root.right = &right20;
    right20.left = &left15;
    right20.right = &right7;

    Solution s;

    std::cout << "result: " << s.maxDepth(&root) << std::endl;

}


