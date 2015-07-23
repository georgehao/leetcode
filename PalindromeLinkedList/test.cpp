/*
 * test.cpp
 *
 *  Created on: 2015年7月22日
 *      Author: dahaol
 */

#include "palindrome_linked.h"

int main()
{
    ListNode node1(1);
    ListNode node2(2);
//    ListNode node3(2);
//    ListNode node4(1);
    ListNode *head = &node1;
    head->next = &node2;
  //  node2.next = &node3;
    //node3.next = &node4;

    Solution s;
    std::cout << s.isPalindrome(head) << std::endl;
}


