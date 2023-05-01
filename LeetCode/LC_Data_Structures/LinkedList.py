from LeetCode.LC_Data_Structures.Node import Node


class LinkedList:
    def __init__(self, head=None):
        self.head = head
        self.length = 0

    def addNode(self, x: float):
        newNode = Node(x, None)
        if self.head is None:
            self.head = newNode
        else:
            current = self.head
            while current.next is not None:
                current = current.next
            current.next = newNode
        self.length += 1

    def printList(self):
        current = self.head
        while current is not None:
            print(current.val, end=" ")
            current = current.next

    def getLength(self):
        return self.length

    def ArrayToLL(self, array):
        if len(array) == 0:
            return None
        head = Node(array[0], None)

        ptr = head
        for i in array[1:]:
            new = Node(i, None)
            ptr.next = new
            ptr = ptr.next

        return head

# if __name__ == '__main__':
#     linkedList = LinkedList()
#     linkedList.addNode(23)
#     linkedList.addNode(24)
#     linkedList.addNode(25)
#     linkedList.printList()
#     print("\nLength of LL", linkedList.getLength())
