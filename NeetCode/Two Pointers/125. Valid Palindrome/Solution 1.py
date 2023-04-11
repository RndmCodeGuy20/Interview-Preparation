class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = self.alphanum(s)
        s = s.lower()
        if s == "":
            return True

        j = len(s) - 1
        for i in range(len(s)):
            if s[i] != s[j]:
                return False

            j -= 1
            if i == j:
                return True

        return True

    def alphanum(self, s: str) -> str:
        new = ""
        for c in s:
            if (ord('A') <= ord(c) <= ord('Z')) | (ord('a') <= ord(c) <= ord('z')) | (ord('0') <= ord(c) <= ord('9')):
                new += c

        return new


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.isPalindrome("A man, a plan, a canal: Panama"))
    print(solution.isPalindrome("race a car"))
    print(solution.isPalindrome(" "))
    print(solution.isPalindrome("0P"))
