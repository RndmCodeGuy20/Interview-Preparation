class Solution:
    def nthTribonacciNumber(self, n: int) -> int:
        p1, p2, p3 = 0, 1, 1

        if n == 0:
            return p1
        if n == 1 or n == 2:
            return p2

        out = 0
        for _ in range(3, n + 1):
            out = p1 + p2 + p3
            p1 = p2
            p2 = p3
            p3 = out

        return out


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.nthTribonacciNumber(30))
