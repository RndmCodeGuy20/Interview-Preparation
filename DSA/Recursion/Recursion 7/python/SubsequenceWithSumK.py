def SubsequencWSumK(index: int, arr: [], nums: [], n: int, k: int):
    if index == n:
        if sum(arr) == k:
            print(arr)
            return
        return

    arr.append(nums[index])
    SubsequencWSumK(index + 1, arr, nums, n, k)
    arr.pop()
    SubsequencWSumK(index + 1, arr, nums, n, k)


if __name__ == '__main__':
    nums = [3, 1, 2]
    arr = []
    n = 3
    k = 3
    SubsequencWSumK(0, arr, nums, n, k)
