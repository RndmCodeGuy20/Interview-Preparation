class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        flag: bool = False

        sMap = {}
        tMap = {}

        for i in range(len(s)):
            sMap[s[i]] = 1 + sMap.get(s[i], 0)
            tMap[t[i]] = 1 + tMap.get(t[i], 0)

        for i in sMap.keys():
            if sMap[i] == tMap.get(i, 0):
                flag = True
            else:
                return False
        return flag


solution: Solution = Solution()

print(solution.isAnagram("eat", "tan"))
