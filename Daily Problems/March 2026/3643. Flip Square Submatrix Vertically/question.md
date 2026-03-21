# Flip Square Submatrix Vertically

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Two Pointers</div>
<div style="color: #46c6c2">Matrix</div>
</div>

---

You are given an `m x n` integer matrix `grid`, and three integers `x`, `y`, and `k`.

The integers `x` and `y` represent the row and column indices of the **top-left** corner of a **square** submatrix and the integer `k` represents the size (side length) of the square submatrix.

Your task is to flip the submatrix by reversing the order of its rows vertically.

Return the updated matrix.

**Example 1:**

![](https://assets.leetcode.com/uploads/2025/07/20/gridexmdrawio.png)

**Input:** grid = \[\[1,2,3,4\],\[5,6,7,8\],\[9,10,11,12\],\[13,14,15,16\]\], x = 1, y = 0, k = 3

**Output:** \[\[1,2,3,4\],\[13,14,15,8\],\[9,10,11,12\],\[5,6,7,16\]\]

**Explanation:**

The diagram above shows the grid before and after the transformation.

**Example 2:**

![](https://assets.leetcode.com/uploads/2025/07/20/gridexm2drawio.png)​​​​​​​

**Input:** grid = \[\[3,4,2,3\],\[2,3,4,2\]\], x = 0, y = 2, k = 2

**Output:** \[\[3,4,4,2\],\[2,3,2,3\]\]

**Explanation:**

The diagram above shows the grid before and after the transformation.

**Constraints:**

*   `m == grid.length`
*   `n == grid[i].length`
*   `1 <= m, n <= 50`
*   `1 <= grid[i][j] <= 100`
*   `0 <= x < m`
*   `0 <= y < n`
*   `1 <= k <= min(m - x, n - y)`