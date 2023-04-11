"""
- Approach -> binary search
"""


class Solution:
    def successfulPairs(self, spells: list[int], potions: list[int], success: int) -> list[int]:
        potions.sort()
        pairs = []

        for s in spells:
            left = 0
            right = len(potions) - 1
            # mid = (left + right) // 2

            while left <= right:
                mid = (left + right) // 2
                if s * potions[mid] >= success:
                    right = mid - 1
                else:
                    left = mid + 1
            pairs.append(len(potions) - left)

        return pairs


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.successfulPairs([3, 1, 2], [8, 5, 8], 16))
