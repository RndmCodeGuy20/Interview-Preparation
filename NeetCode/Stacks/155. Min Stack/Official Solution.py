class MinStack:

    def __init__(self):
        self.stack = []
        self.current_min = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if len(self.current_min) == 0:
            self.current_min.append(val)
        elif val < self.current_min[- 1]:
            self.current_min.append(val)
        else:
            self.current_min.append(self.current_min[- 1])

    def pop(self) -> None:
        self.stack.pop()
        self.current_min.pop()

    def top(self) -> int:
        return self.stack[- 1]

    def getMin(self) -> int:
        return self.current_min[- 1]
