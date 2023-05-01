from LeetCode.LC_Data_Structures import Node, LinkedList

ll = LinkedList()
head = ll.ArrayToLL([1, 2, 3, 4, 5])


# ptr = head
# while ptr:
#     print(ptr.val, end=" ")
#     ptr = ptr.next


def recursiveTraverse(ptr: Node):
    if ptr:
        recursiveTraverse(ptr.next)
        print(ptr.val)

    return ptr


ptr = recursiveTraverse(head)

while ptr:
    print(ptr.val, end=" ")
    ptr = ptr.next
