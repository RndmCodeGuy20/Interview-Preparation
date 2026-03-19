# Count Submatrices With Equal Frequency of X and Y

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Matrix</div>
<div style="color: #46c6c2">Prefix Sum</div>
</div>

---

Given a 2D character matrix `grid`, where `grid[i][j]` is either `'X'`, `'Y'`, or `'.'`, return the number of submatrices that contain:

*   `grid[0][0]`
*   an **equal** frequency of `'X'` and `'Y'`.
*   **at least** one `'X'`.

**Example 1:**

**Input:** grid = \[\["X","Y","."\],\["Y",".","."\]\]

**Output:** 3

**Explanation:**

**![](https://assets.leetcode.com/uploads/2024/06/07/examplems.png)**

**Example 2:**

**Input:** grid = \[\["X","X"\],\["X","Y"\]\]

**Output:** 0

**Explanation:**

No submatrix has an equal frequency of `'X'` and `'Y'`.

**Example 3:**

**Input:** grid = \[\[".","."\],\[".","."\]\]

**Output:** 0

**Explanation:**

No submatrix has at least one `'X'`.

**Constraints:**

*   `1 <= grid.length, grid[i].length <= 1000`
*   `grid[i][j]` is either `'X'`, `'Y'`, or `'.'`.