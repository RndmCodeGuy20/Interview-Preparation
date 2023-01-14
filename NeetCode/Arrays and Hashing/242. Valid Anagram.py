class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False

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

print(va.isAnagram("anagram", "anagram"))
