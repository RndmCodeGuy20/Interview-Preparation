def check_if_array_sorted_REC(A):
    if len(A) == 1:
        return True
    else:
        return A[0] < A[1] and check_if_array_sorted_REC(A[1:])


def check_if_array_sorted_ITER(A):
    flag: bool = False
    for i in range(len(A) - 1):
        if A[i] <= A[i + 1]:
            flag = True
        else:
            flag = False
            return flag

    return flag


print(check_if_array_sorted_ITER([1, 2, 3, 4, 5, 6, 8]))
print(check_if_array_sorted_ITER([4, 5, 6, 8, 1, 2, 3]))
