def append_at_front(x, L):
    return [x + el for el in L]


def generate_bit_strings(n):
    if n == 0:
        return []
    if n == 1:
        return ["0", "1"]

    else:
        return append_at_front("0", generate_bit_strings(n - 1)) + append_at_front("1", generate_bit_strings(n - 1))


print(generate_bit_strings(2))
