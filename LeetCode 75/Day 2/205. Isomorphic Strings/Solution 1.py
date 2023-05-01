class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        rezMap = {}
        
        for i in range(len(s)):
            # print(rezMap)
            if rezMap.get(s[i]):
                if rezMap[s[i]] != t[i]:
                    return False
            else:
                rezMap[s[i]] = t[i]
        return True


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.isIsomorphic('badc', 'baba'))
