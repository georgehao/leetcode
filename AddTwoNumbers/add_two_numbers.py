"""
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
"""
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        lreturn = l3 = ListNode(object)
        remainder = 0
        while l1 or l2 or remainder:
            value = 0
            value = (value + l1.val) if l1 else value + 0
            value = (value + l2.val) if l2 else value + 0
            value += remainder

            remainder1 = 0
            if value >= 10:
                remainder1 = value / 10
                value = value % 10

            l3.val = value
            remainder = remainder1

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            if l1 or l2 or remainder:
                l3.next = ListNode(object)
                l3 = l3.next
        return lreturn

if __name__ == "__main__":
    l1 = ListNode(object)
    l1.val = 1
    # n2 = ListNode(object)
    # n2.val = 4
    # n3 = ListNode(object)
    # n3.val = 3
    # l1.next = n2
    # n2.next = n3

    l2 = ListNode(object)
    l2.val = 9
    n4 = ListNode(object)
    n4.val = 9
    # n5 = ListNode(object)
    # n5.val = 4
    l2.next = n4
    # n4.next = n5

    s = Solution()
    r = s.addTwoNumbers(l1, l2)    
    while r:
        print r.val
        r = r.next
        