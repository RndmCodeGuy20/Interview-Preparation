class Solution:
    def lenghtOfLastWord(self, s: str):
        s = s.strip()
        ls = s.split(" ")

        return len(ls[-1])


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.lenghtOfLastWord("Hello "))
