class Solution:
    def average(self, salary: list[int]) -> float:
        salary.sort()
        salSum = 0
        for i in salary[1:-1]:
            salSum += i

        return salSum / len(salary[1:-1])


if __name__ == "__main__":
    solution: Solution = Solution()
    print(solution.average([4000, 3000, 1000, 2000]))
