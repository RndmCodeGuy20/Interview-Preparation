# Count Submatrices with Top-Left Element and Sum Less Than k

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Matrix</div>
<div style="color: #46c6c2">Prefix Sum</div>
</div>

---

You are given a **0-indexed** integer matrix `grid` and an integer `k`.

Return _the **number** of submatrices that contain the top-left element of the_ `grid`, _and have a sum less than or equal to_ `k`.

**Example 1:**

![](https://assets.leetcode.com/uploads/2024/01/01/example1.png)

**Input:** grid = \[\[7,6,3\],\[6,6,1\]\], k = 18
**Output:** 4
**Explanation:** There are only 4 submatrices, shown in the image above, that contain the top-left element of grid, and have a sum less than or equal to 18.

**Example 2:**

![](https://assets.leetcode.com/uploads/2024/01/01/example21.png)

**Input:** grid = \[\[7,2,9\],\[1,5,0\],\[2,6,6\]\], k = 20
**Output:** 6
**Explanation:** There are only 6 submatrices, shown in the image above, that contain the top-left element of grid, and have a sum less than or equal to 20.

**Constraints:**

*   `m == grid.length`
*   `n == grid[i].length`
*   `1 <= n, m <= 1000`
*   `0 <= grid[i][j] <= 1000`
*   `1 <= k <= 109`