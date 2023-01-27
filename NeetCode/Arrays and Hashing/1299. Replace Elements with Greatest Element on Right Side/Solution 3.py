class Solution:
    def replaceElement(self, arr: list[int]) -> list[int]:
        maxEl = -1

        if len(arr) == 1:
            return [maxEl]

        for i in range(len(arr) - 1, -1, -1):
            newMaxEl = max(maxEl, arr[i])
            arr[i] = maxEl
            maxEl = newMaxEl

        return arr


if __name__ == '__main__':
    sol: Solution = Solution()

    print(sol.replaceElement([400]))
