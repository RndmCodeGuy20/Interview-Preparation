class Solution:
    def runnningSum(self, nums: list[int]) -> list[int]:
        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]
        return nums


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.runnningSum([1, 2, 3, 4]))
