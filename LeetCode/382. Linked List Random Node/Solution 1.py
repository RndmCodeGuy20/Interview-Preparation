from LeetCode.LC_Data_Structures import Node, LinkedList


class Solution:
    def __init__(self, head: Node):
        self.head = head

    def getRandom(self) -> int:
        ptr = self.head

        length = 0

        while ptr:
            length += 1
            ptr = ptr.next

        print(length)


if __name__ == "__main__":
    solution: Solution = Solution()
