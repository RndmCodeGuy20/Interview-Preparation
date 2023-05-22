nums1 = [1, 2, 3]
nums2 = [2, 4, 6]

rez = []
temp = []
for i in nums1:
    if i not in nums2:
        temp.append(i)

rez.append(temp)
temp = []
for i in nums2:
    if i not in nums1:
        temp.append(i)

rez.append(temp)

print(rez)
