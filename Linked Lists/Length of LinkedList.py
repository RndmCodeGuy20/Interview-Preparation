class Node:
    def __init__(self, data: int, next):
        self.next = next
        self.data = data


class LinkedList:
    def __init__(self, node: Node):
        self.length = 0
        self.head = node

    def lengthLL(self):
        current = self.head
        count = 0
        while current != None:
            count += 1
            current = current.next

        self.length = count
        return self.length


if __name__ == '__main__':
    node: Node = Node(23, None)

    linkedList: LinkedList = LinkedList(node)

    print(node.data, linkedList.head, linkedList.lengthLL())
