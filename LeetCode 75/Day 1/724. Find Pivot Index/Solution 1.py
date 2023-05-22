class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        sumLeft, sumRight = 0, sum(nums[1:])
        if sumLeft == sumRight:
            return 0
        for i in range(1, len(nums)):
            sumLeft += nums[i - 1]
            sumRight -= nums[i]
            if sumLeft == sumRight:
                return i
        return -1


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.pivotIndex([-1, -1, 0, 1, 1, 0]))
