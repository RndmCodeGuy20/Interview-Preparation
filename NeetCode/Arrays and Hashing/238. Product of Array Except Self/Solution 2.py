class Solution:
    @staticmethod
    def productExceptSelf(nums: list[int]) -> list[int]:
        pre, post = 1, 1
        rez = [1]
        for i in range(len(nums) - 1):
            pre *= nums[i]
            rez.append(pre)
        for i in range(len(nums) - 1, -1, -1):
            rez[i] = rez[i] * post
            post *= nums[i]
        return rez


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.productExceptSelf([-1, 1, 0, -3, 3]))
