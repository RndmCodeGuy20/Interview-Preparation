class Solution:
    def longestCommonPrefix(self, strs: list) -> str:
        rez = ""

        for i in range(len(strs[0])):
            for j in strs:
                if j[i] != strs[0][i] or i == len(strs):
                    return rez

            rez += strs[0][i]

        return ""


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.longestCommonPrefix(["flower", "flight", "flow"]))
