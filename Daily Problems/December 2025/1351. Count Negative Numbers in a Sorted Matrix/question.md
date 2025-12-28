# Count Negative Numbers in a Sorted Matrix

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Binary Search</div>
<div style="color: #46c6c2">Matrix</div>
</div>

---

Given a `m x n` matrix `grid` which is sorted in non-increasing order both row-wise and column-wise, return _the number of **negative** numbers in_ `grid`.

**Example 1:**

**Input:** grid = \[\[4,3,2,-1\],\[3,2,1,-1\],\[1,1,-1,-2\],\[-1,-1,-2,-3\]\]
**Output:** 8
**Explanation:** There are 8 negatives number in the matrix.

**Example 2:**

**Input:** grid = \[\[3,2\],\[1,0\]\]
**Output:** 0

**Constraints:**

*   `m == grid.length`
*   `n == grid[i].length`
*   `1 <= m, n <= 100`
*   `-100 <= grid[i][j] <= 100`

**Follow up:** Could you find an `O(n + m)` solution?