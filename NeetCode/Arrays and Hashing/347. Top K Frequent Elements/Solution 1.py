class Solution:
    def kFrequentElements(self, nums: list[int], k: int) -> list[int]:
        rez_map = {}

        for i in nums:
            rez_map[i] = 1 + rez_map.get(i, 0)

        rez_map = sorted(rez_map.items(), key=lambda x: x[1])

        return [rez_map[i][0] for i in range(len(rez_map) - 1, -1, -1)][:k]


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.kFrequentElements([1], 1))
