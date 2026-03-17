# Largest Submatrix With Rearrangements

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Sorting</div>
<div style="color: #46c6c2">Matrix</div>
</div>

---

You are given a binary matrix `matrix` of size `m x n`, and you are allowed to rearrange the **columns** of the `matrix` in any order.

Return _the area of the largest submatrix within_ `matrix` _where **every** element of the submatrix is_ `1` _after reordering the columns optimally._

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/12/29/screenshot-2020-12-30-at-40536-pm.png)

**Input:** matrix = \[\[0,0,1\],\[1,1,1\],\[1,0,1\]\]
**Output:** 4
**Explanation:** You can rearrange the columns as shown above.
The largest submatrix of 1s, in bold, has an area of 4.

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/12/29/screenshot-2020-12-30-at-40852-pm.png)

**Input:** matrix = \[\[1,0,1,0,1\]\]
**Output:** 3
**Explanation:** You can rearrange the columns as shown above.
The largest submatrix of 1s, in bold, has an area of 3.

**Example 3:**

**Input:** matrix = \[\[1,1,0\],\[1,0,1\]\]
**Output:** 2
**Explanation:** Notice that you must rearrange entire columns, and there is no way to make a submatrix of 1s larger than an area of 2.

**Constraints:**

*   `m == matrix.length`
*   `n == matrix[i].length`
*   `1 <= m * n <= 105`
*   `matrix[i][j]` is either `0` or `1`.