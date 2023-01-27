class Solution:
    def findMax(self, arr: list) -> int:
        if len(arr) == 0:
            return -1
        maxEl = arr[0]
        for j in arr:
            if j > maxEl:
                maxEl = j

        return maxEl

    def replaceElements(self, arr: list) -> list:
        for i in range(len(arr)):
            maxEl = self.findMax(arr[i + 1:])
            arr[i] = maxEl

        return arr


if __name__ == '__main__':
    solution: Solution = Solution()
    arr = [17, 18, 5, 4, 6, 1]
    arr = solution.replaceElements(arr)
    print(arr)
