class Solution:
    def search(self, nums: list[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        if len(nums) == 0:
            return -1

        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.search([-1, 0, 3, 5, 9, 12], 9))
