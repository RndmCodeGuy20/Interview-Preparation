def PrintSub(index: int, arr: [], nums: [], n: int):
    if index == n:
        print(arr)
        return

    arr.append(nums[index])
    PrintSub(index + 1, arr, nums, n)
    arr.pop()
    PrintSub(index + 1, arr, nums, n)


if __name__ == '__main__':
    nums = [3, 1, 2]
    arr = []
    n = len(nums)
    PrintSub(0, arr, nums, 3)
