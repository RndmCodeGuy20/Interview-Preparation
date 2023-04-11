class Solution:
    def lengthOfLastWord(self, s: str):
        if " " not in s:
            return len(s)
        word = ""

        for i in range(len(s) - 1, -1, -1):
            if s[i] == " ":
                if len(word) != 0:
                    return len(word)
            else:
                word += s[i]
                if i == 0:
                    return len(word)

        # print(word)


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.lengthOfLastWord("auytuvtf "))
