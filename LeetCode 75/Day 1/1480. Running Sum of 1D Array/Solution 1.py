class Solution:
    def runnningSum(self, nums: list[int]) -> list[int]:
        sums = []
        sumEl = 0
        for i in nums:
            sumEl += i
            sums.append(sumEl)
        return sums


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.runnningSum([1, 2, 3, 4]))
