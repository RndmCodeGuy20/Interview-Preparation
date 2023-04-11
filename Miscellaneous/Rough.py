arr = [5, 10, 10, 15, 20, 25]
search = 7

left = 0
right = len(arr) - 1

while left <= right:
    mid = left + right // 2
    if arr[mid] >= search:
        right = mid - 1
    else:
        left = mid + 1

    print(arr[mid:])
