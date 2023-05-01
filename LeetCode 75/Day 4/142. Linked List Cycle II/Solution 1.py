from LeetCode.LC_Data_Structures import Node, LinkedList


class Solution:
    def detectCycle(self, head: Node) -> Node:
        tortoise, hare = head, head
        while hare and hare.next:
            tortoise, hare = tortoise.next, hare.next.next
            if tortoise == hare:
                hare = head
                while tortoise != hare:
                    tortoise = tortoise.next
                    hare = hare.next
                return hare
        return None


if __name__ == "__main__":
    solution: Solution = Solution()
    ll = LinkedList()

    head = ll.ArrayToLL([1, 2, 3])
