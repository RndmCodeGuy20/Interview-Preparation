class Solution:
    def replaceElements(self, arr: list) -> list:
        for i in range(len(arr) - 1):
            maxEl = max(arr[i + 1:])
            arr[i] = maxEl

        arr[len(arr) - 1] = -1

        return arr


if __name__ == '__main__':
    solution: Solution = Solution()
    arr = [17, 18, 5, 4, 6, 1]
    arr = solution.replaceElements(arr)
    print(arr)
