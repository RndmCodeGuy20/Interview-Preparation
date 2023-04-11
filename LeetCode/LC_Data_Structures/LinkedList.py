class Node:
    def __init__(self, x: float, next=None):
        self.val = x
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = None
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

# if __name__ == '__main__':
#     linkedList = LinkedList()
#     linkedList.addNode(23)
#     linkedList.addNode(24)
#     linkedList.addNode(25)
#     linkedList.printList()
#     print("\nLength of LL", linkedList.getLength())
