from LeetCode.LC_Data_Structures import Node, LinkedList


class Solution:
    def reverseList(self, head: Node) -> Node:
        new = head
        if head.next:
            new = self.reverseList(head.next)
        print(new.val)
        return head


if __name__ == "__main__":
    solution: Solution = Solution()
    ll = LinkedList()
    head = ll.ArrayToLL([1, 2, 3, 4, 5])
    head = solution.reverseList(head)

    # while head:
    #     print(head.val, end=" ")
    #     head = head.next
