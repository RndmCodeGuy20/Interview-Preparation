class MinStack:

    def __init__(self):
        self.stack = []
        self.current_min = []
        self.top_el = -1

    def push(self, val: int) -> None:
        if self.top_el == -1:
            self.current_min.append(val)
        elif val < self.current_min[- 1]:
            self.current_min.append(val)
        else:
            self.current_min.append(self.current_min[- 1])
        # print(self.current_min, self.stack)
        self.stack.append(val)
        self.top_el = len(self.stack) - 1

    def pop(self) -> None:
        self.stack.pop()

    def top(self) -> int:
        return self.stack[- 1]

    def getMin(self) -> int:
        # print(self.current_min)
        return self.current_min[len(self.stack) - 1]


if __name__ == '__main__':
    obj = MinStack()
    obj.push(-2)
    obj.push(0)
    obj.push(-1)
    print(obj.current_min)
    print(obj.getMin())
    obj.pop()
    print(obj.top())
    print(obj.getMin())
