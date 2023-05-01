from LeetCode.LC_Data_Structures import Node, LinkedList


class Solution:
    def middleNode(self, head: Node) -> Node:
        ptr = head
        length = 0

        while ptr:
            length += 1
            ptr = ptr.next
        ptr = head
        for i in range(length // 2):
            ptr = ptr.next

        return ptr


if __name__ == "__main__":
    solution: Solution = Solution()
    ll = LinkedList()

    head = ll.ArrayToLL([1, 2, 3, 4, 5, 6])
    print(solution.middleNode(head).val)
