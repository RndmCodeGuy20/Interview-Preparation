# Maximum Side Length of a Square with Sum Less than or Equal to Threshold

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Binary Search</div>
<div style="color: #46c6c2">Matrix</div>
<div style="color: #46c6c2">Prefix Sum</div>
</div>

---

Given a `m x n` matrix `mat` and an integer `threshold`, return _the maximum side-length of a square with a sum less than or equal to_ `threshold` _or return_ `0` _if there is no such square_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/12/05/e1.png)

**Input:** mat = \[\[1,1,3,2,4,3,2\],\[1,1,3,2,4,3,2\],\[1,1,3,2,4,3,2\]\], threshold = 4
**Output:** 2
**Explanation:** The maximum side length of square with sum less than 4 is 2 as shown.

**Example 2:**

**Input:** mat = \[\[2,2,2,2,2\],\[2,2,2,2,2\],\[2,2,2,2,2\],\[2,2,2,2,2\],\[2,2,2,2,2\]\], threshold = 1
**Output:** 0

**Constraints:**

*   `m == mat.length`
*   `n == mat[i].length`
*   `1 <= m, n <= 300`
*   `0 <= mat[i][j] <= 104`
*   `0 <= threshold <= 105`