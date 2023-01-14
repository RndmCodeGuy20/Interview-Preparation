def find_fibonacci_series(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return find_fibonacci_series(n - 1) + find_fibonacci_series(n - 2)


print(find_fibonacci_series(6))
