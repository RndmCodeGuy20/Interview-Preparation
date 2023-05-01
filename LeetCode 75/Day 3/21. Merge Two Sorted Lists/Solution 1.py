from LeetCode.LC_Data_Structures import Node, LinkedList


class Solution:
    def mergeTwoLists(self, list1: Node, list2: Node) -> Node:
        i, j = list1, list2

        if i is None and j is None:
            return list1
        elif i is None:
            return list2
        elif j is None:
            return list1

        if i.val < j.val:
            list3 = last = Node(i.val, None)
            i = i.next
        else:
            list3 = last = Node(j.val, None)
            j = j.next

        while i and j:
            ptr = last
            if i.val <= j.val:
                last = Node(i.val, None)
                ptr.next = last
                i = i.next
            else:
                last = Node(j.val, None)
                ptr.next = last
                j = j.next

        if i:
            while i:
                ptr = last
                last = Node(i.val, None)
                ptr.next = last
                i = i.next

        if j:
            while j:
                ptr = last
                last = Node(j.val, None)
                ptr.next = last
                j = j.next

        return list3


if __name__ == "__main__":
    solution: Solution = Solution()
    ll = LinkedList()
    list1, list2 = ll.ArrayToLL([-9, 3]), ll.ArrayToLL([5, 7])

    ptr = solution.mergeTwoLists(list1, list2)

    while ptr:
        print(ptr.val, end=" ")
        ptr = ptr.next
