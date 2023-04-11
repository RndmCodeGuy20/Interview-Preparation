from collections import defaultdict


class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        rezMap = defaultdict(list)

        for s in strs:
            count = [0] * 26

            for c in s:
                count[ord(c) - ord("a")] += 1

            rezMap[tuple(count)].append(s)

        print(rezMap.values())


if __name__ == "__main__":
    solution: Solution = Solution()

    solution.groupAnagrams(["eat", "ate", "tan", "nat", "tea", "bat"])
