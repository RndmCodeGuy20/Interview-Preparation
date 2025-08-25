# Diagonal Traverse

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Matrix</div>
<div style="color: #46c6c2">Simulation</div>
</div>

---

Given an `m x n` matrix `mat`, return _an array of all the elements of the array in a diagonal order_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/04/10/diag1-grid.jpg)

**Input:** mat = \[\[1,2,3\],\[4,5,6\],\[7,8,9\]\]
**Output:** \[1,2,4,7,5,3,6,8,9\]

**Example 2:**

**Input:** mat = \[\[1,2\],\[3,4\]\]
**Output:** \[1,2,3,4\]

**Constraints:**

*   `m == mat.length`
*   `n == mat[i].length`
*   `1 <= m, n <= 104`
*   `1 <= m * n <= 104`
*   `-105 <= mat[i][j] <= 105`