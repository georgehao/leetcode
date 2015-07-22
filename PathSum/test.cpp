/*
 * test.cpp
 *
 *  Created on: 2015年7月21日
 *      Author: dahaol
 */
#include "path_sum.h"

TreeNode* insert(TreeNode* root, TreeNode* node, bool RL)
{
    if (node != nullptr) {
        if (RL) {
            root->left = node;
        } else {
            root->right = node;
        }
    }
    return root;
}

int main()
{
    TreeNode root(1);
    TreeNode node(2);
    insert(&root, &node, true);
//    TreeNode l_2_l(-2);
//    TreeNode l_2_r(-3);
//
//    TreeNode l_3_l(1);
//    TreeNode l_3_r(3);
//    TreeNode l_3_lr(-2);
//
//    TreeNode l_4_l(-1);
//
//    //root 1
//    insert(&root, &l_2_l , true);
//    insert(&root, &l_2_r, false);
//
//    //-2
//    insert(&l_2_l, &l_3_l , true);
//    insert(&l_2_l, &l_3_r , false);
//
//    //-3
//    insert(&l_2_r, &l_3_lr , true);
//    insert(&l_2_r, nullptr, false);
//
//    //1
//    insert(&l_3_l, &l_4_l, true);


    Solution s;
    std::cout << s.hasPathSum(&root, 3) << std::endl;

}
