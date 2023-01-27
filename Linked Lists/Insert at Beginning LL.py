class Node:
    def __init__(self, data: int, next):
        self.next = next
        self.data = data


class LinkedList:
    def __init__(self, node: Node):
        self.length = 0
        self.head = node

    def insertAtBeginning(self, data):
        temp: Node = Node(data, self.head)

        self.head = temp
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

    print(node.data, linkedList.head.data)

    linkedList.insertAtBeginning(34)

    print(node.data, linkedList.head.data)

    linkedList.traverseLList()
