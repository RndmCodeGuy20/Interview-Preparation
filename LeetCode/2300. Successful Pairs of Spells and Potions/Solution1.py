"""
- Approach -> linear search
- Drawback -> Time Limit Exceeded fir bigger lists
"""


class Solution:
    def successfulPairs(self, spells: list[int], potions: list[int], success: int) -> list[int]:
        pairs = []

        for i in range(len(spells)):
            temp = 0
            for j in range(len(potions)):
                if spells[i] * potions[j] >= success:
                    temp += 1

            pairs.append(temp)

        print(pairs)


if __name__ == "__main__":
    solution: Solution = Solution()
    solution.successfulPairs([3, 1, 2], [8, 5, 8], 16)
