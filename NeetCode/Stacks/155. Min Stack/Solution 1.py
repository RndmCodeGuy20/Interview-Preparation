class MinStack:
    stack = []
    small = 0
    top_el = -1

    def __init__(self):
        pass

    def push(self, val: int) -> None:
        if self.top_el == -1:
            self.small = val
        elif val < self.small:
            self.small = val

        self.stack.append(val)
        self.top_el = len(self.stack) - 1

    def pop(self) -> None:
        self.stack.pop()

    def top(self) -> int:
        return self.stack[len(self.stack) - 1]

    def getMin(self) -> int:
        return self.small


if __name__ == '__main__':
    obj = MinStack()
    obj.push(-2)
    obj.push(0)
    obj.push(-3)
    print(obj.getMin())
    obj.pop()
    print(obj.top())
    print(obj.getMin())
