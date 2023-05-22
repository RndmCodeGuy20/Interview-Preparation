class Solution:
    def findDifference(self, nums1: list, nums2: list) -> list[list]:
        s1 = set(nums1)
        s2 = set(nums2)

        return [list(s1 - s2), list(s2 - s1)]


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.findDifference([1, 2, 3], [2, 4, 6]))
