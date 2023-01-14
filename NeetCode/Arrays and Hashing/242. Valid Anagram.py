class Solution:
    def validAnagram(self, s: str, t: str) -> bool:

        flag: bool = False

        s = sorted([s for s in s])
        t = sorted([s for s in t])

        for i in range(len(s)):
            if s[i] == t[i]:
                flag = True
            else:
                return False

        return flag


va: Solution = Solution()

print(va.validAnagram("anagram", "anagram"))