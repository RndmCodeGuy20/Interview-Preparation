def printNosOneToN(n):
    if n == 0:
        return
    printNosOneToN(n - 1)
    print(n, end=" ")


if __name__ == '__main__':
    printNosOneToN(10)
