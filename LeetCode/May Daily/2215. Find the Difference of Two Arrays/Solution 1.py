class Solution:
    def findDifference(self, nums1: list, nums2: list) -> list[list]:
        rez = []
        temp = []
        for i in nums1:
            if i not in nums2 and i not in temp:
                temp.append(i)

        rez.append(temp)
        temp = []
        for i in nums2:
            if i not in nums1 and i not in temp:
                temp.append(i)
        rez.append(temp)

        return rez


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.findDifference([1, 2, 3], [2, 4, 6]))
