class Node:
    def __init__(self, data: int, next):
        self.next = next
        self.data = data


class LinkedList:
    def __init__(self, node: Node):
        self.length = 0
        self.head = node

    def insertAtEnd(self, data):
        new: Node = Node(data, None)
        temp: Node = self.head

        while temp.next != None:
            temp = temp.next

        temp.next = new
        self.length += 1

        return self.head

    def traverseLList(self):
        temp: Node = self.head

        while temp:
            print(temp.data, end=" ➡️ ")
            temp = temp.next


if __name__ == '__main__':
    node: Node = Node(23, None)

    linkedList: LinkedList = LinkedList(node)

    linkedList.insertAtEnd(34)

    linkedList.traverseLList()
