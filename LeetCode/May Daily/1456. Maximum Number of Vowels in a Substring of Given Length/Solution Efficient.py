class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = "aeiou"

        if s == vowels:
            return k

        l, countVowels, res = 0, 0, 0

        for r, v in enumerate(s):
            countVowels += 1 if s[r] in vowels else 0

            if r - l + 1 > k:
                countVowels -= 1 if s[l] in vowels else 0
                l += 1
            res = max(res, countVowels)

        return res


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.maxVowels("tryhard", 4))
