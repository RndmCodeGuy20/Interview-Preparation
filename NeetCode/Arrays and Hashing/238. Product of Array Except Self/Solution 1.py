class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        rez = []
        for i in range(len(nums)):
            product = 1
            for j in range(len(nums)):
                if i == j:
                    product *= 1
                else:
                    product *= nums[j]
            rez.append(product)
        return rez


if __name__ == "__main__":
    solution: Solution = Solution()

    print(solution.productExceptSelf([-1, 1, 0, -3, 3]))
