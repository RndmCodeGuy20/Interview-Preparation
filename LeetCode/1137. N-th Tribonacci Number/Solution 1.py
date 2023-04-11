class Solution:
    def nthTribonacciNumber(self, num: int) -> int:
        if num == 0:
            return 0
        elif num == 1:
            return 1
        elif num == 2:
            return 1
        else:
            return self.nthTribonacciNumber(num - 1) + self.nthTribonacciNumber(num - 2) + self.nthTribonacciNumber(
                num - 3)


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.nthTribonacciNumber(30))
