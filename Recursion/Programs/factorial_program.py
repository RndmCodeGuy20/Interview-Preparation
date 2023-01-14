def find_factorial(n=5) -> int:
    if n == 1:
        return 1
    else:
        return n * find_factorial(n - 1)


print(find_factorial())
