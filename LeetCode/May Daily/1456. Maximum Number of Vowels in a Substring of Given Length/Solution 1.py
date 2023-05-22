class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = "aeiou"
        countVowels = 0

        if s == vowels:
            return k

        i, j = 0, 0

        for key, val in enumerate(s):
            if val in vowels:
                i = key
                countVowels = 1
                break

        j = i + k - 1

        while j < len(s):
            temp = 0
            for n in s[i:j + 1]:
                if n in vowels:
                    temp += 1
                print(j, n, temp)
            countVowels = max(temp, countVowels)
            i, j = i + 1, j + 1

        return countVowels


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.maxVowels("tryhard", 4))
