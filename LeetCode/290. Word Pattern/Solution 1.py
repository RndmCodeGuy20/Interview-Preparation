class Solution:
    def wordPattern(self, pattern, s) -> bool:
        s = s.split(" ")
        rezTable = {}

        if len(s) != len(pattern):
            return False

        for i in range(len(pattern)):
            if not rezTable.get(pattern[i]):
                rezTable[pattern[i]] = s[i]

        if len(rezTable.values()) != len(set(rezTable.values())):
            return False

        for i in range(len(pattern)):
            if rezTable[pattern[i]] != s[i]:
                return False

        return True


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.wordPattern("abba", "dog dog dog dog"))
