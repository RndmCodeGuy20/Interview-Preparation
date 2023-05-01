from LeetCode.LC_Data_Structures import LinkedList, Node


class Solution:
    def reverseList(self, head: Node) -> Node:
        stack = []

        ptr = head

        while ptr:
            stack.append(ptr.val)
            ptr = ptr.next

        head = Node(stack.pop(), None)
        ptr = head
        while stack:
            new = Node(stack.pop())
            ptr.next = new
            ptr = ptr.next

        return head


if __name__ == "__main__":
    solution: Solution = Solution()
    ll = LinkedList()
    head = ll.ArrayToLL([1, 2, 3, 4, 5])
    head = solution.reverseList(head)

    while head:
        print(head.val, end=" ")
        head = head.next
