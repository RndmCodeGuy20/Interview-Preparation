# Maximal Rectangle

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Stack</div>
<div style="color: #46c6c2">Matrix</div>
<div style="color: #46c6c2">Monotonic Stack</div>
</div>

---

Given a `rows x cols` binary `matrix` filled with `0`'s and `1`'s, find the largest rectangle containing only `1`'s and return _its area_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/09/14/maximal.jpg)

**Input:** matrix = \[\["1","0","1","0","0"\],\["1","0","1","1","1"\],\["1","1","1","1","1"\],\["1","0","0","1","0"\]\]
**Output:** 6
**Explanation:** The maximal rectangle is shown in the above picture.

**Example 2:**

**Input:** matrix = \[\["0"\]\]
**Output:** 0

**Example 3:**

**Input:** matrix = \[\["1"\]\]
**Output:** 1

**Constraints:**

*   `rows == matrix.length`
*   `cols == matrix[i].length`
*   `1 <= rows, cols <= 200`
*   `matrix[i][j]` is `'0'` or `'1'`.