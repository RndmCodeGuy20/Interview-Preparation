class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) != 0 and len(t) == 0:
            return False
        elif len(s) == len(t) == 0:
            return True
        i, j = 0, 0
        for k in range(len(t)):
            if i >= len(s) or j >= len(t):
                return True
            # print(i, j)

            if s[i] == t[j]:
                # print(s[i], t[j])
                i += 1
                j += 1

            else:
                # print(s[i], t[j])
                j += 1

            if i >= len(s) and j >= len(t):
                return True

        return False


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.isSubsequence("", ""))
