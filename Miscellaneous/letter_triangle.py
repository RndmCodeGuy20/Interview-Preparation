k = ord('A')

for i in range(5):
    for j in range(i):
        print(chr(i + ord('A')), end="")
        k += 1
    print()
