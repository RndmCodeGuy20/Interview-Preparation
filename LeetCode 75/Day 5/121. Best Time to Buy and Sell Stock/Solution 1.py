class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        max_num, min_num, max_ind, min_ind = prices[0], prices[0], 0, 0
        profit = 0

        for index, value in enumerate(prices):
            if value <= min_num:
                min_num = value
                min_ind = index

        print(f"{min_num}, {min_ind}")

        max_num = prices[min_ind]
        i = min_ind

        while i <= len(prices) - 1:
            if prices[i] >= max_num:
                max_num = prices[i]
                max_ind = i

            i += 1

        # for index, value in enumerate(prices[min_ind:]):
        #     if value >= max_num:
        #         max_num = value
        #         max_ind = index

        print(f"{max_num}, {max_ind}")

        if min_ind < max_ind:
            return max_num - min_num

        return 0


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.maxProfit([2, 4, 1]))
