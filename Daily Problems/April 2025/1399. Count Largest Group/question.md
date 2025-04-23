# Count Largest Group

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Math</div>
</div>

---

You are given an integer `n`.

Each number from `1` to `n` is grouped according to the sum of its digits.

Return _the number of groups that have the largest size_.

**Example 1:**

**Input:** n = 13
**Output:** 4
**Explanation:** There are 9 groups in total, they are grouped according sum of its digits of numbers from 1 to 13:
\[1,10\], \[2,11\], \[3,12\], \[4,13\], \[5\], \[6\], \[7\], \[8\], \[9\].
There are 4 groups with largest size.

**Example 2:**

**Input:** n = 2
**Output:** 2
**Explanation:** There are 2 groups \[1\], \[2\] of size 1.

**Constraints:**

*   `1 <= n <= 104`