class Node:
    def __init__(self, data: int, next):
        self.next = next
        self.data = data


class LinkedList:
    def __init__(self, node: Node):
        self.length = 1
        self.head = node


if __name__ == '__main__':
    node: Node = Node(23, None)

    linkedList: LinkedList = LinkedList(node)

    print(node.data, linkedList.head)
