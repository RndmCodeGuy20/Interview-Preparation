class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        for i in range(len(numbers)):
            res = self.binSearch(numbers, target - numbers[i], i + 1, len(numbers) - 1)
            # print(i + 1, res + 1)
            if res != -999:
                return [i + 1, res + 1]

    def binSearch(self, num_list, search_el, low, high) -> int:
        if high >= low:
            mid = low + (high - low) // 2
            if num_list[mid] == search_el:
                return mid
            elif num_list[mid] > search_el:
                return self.binSearch(num_list, search_el, low, mid - 1)
            else:
                return self.binSearch(num_list, search_el, mid + 1, high)
        else:
            return -999


if __name__ == "__main__":
    solution: Solution = Solution()
    # print(solution.binSearch([2, 3, 4], 4, 1, 2))
    print(solution.twoSum([2, 3, 4], 6))
