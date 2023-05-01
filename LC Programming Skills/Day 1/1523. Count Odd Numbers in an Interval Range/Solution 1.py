class Solution:
    def countOdd(self, low: int, high: int) -> int:
        count = 0

        for i in range(low, high + 1):
            if i % 2 == 1:
                count += 1

        return count


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.countOdd(8, 10))
