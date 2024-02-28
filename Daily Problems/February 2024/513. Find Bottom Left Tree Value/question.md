
<style>
*{
    font-family: "Plus Jakarta Sans", sans-serif;
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}
.diff{
    background: #3a3f4b;
    padding: 5px;
    width: max-content;
    border-radius: 5px;
    font-size: 12px;
    font-family: "Plus Jakarta Sans", sans-serif;
    font-weight: 700;
}
</style>

# Find Bottom Left Tree Value

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Tree</div>
<div class="diff" style="color: #46c6c2">Depth-First Search</div>
<div class="diff" style="color: #46c6c2">Breadth-First Search</div>
<div class="diff" style="color: #46c6c2">Binary Tree</div>
</div>

---

Given the `root` of a binary tree, return the leftmost value in the last row of the tree.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/12/14/tree1.jpg)

**Input:** root = \[2,1,3\]
**Output:** 1

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/12/14/tree2.jpg)

**Input:** root = \[1,2,3,4,null,5,6,null,null,7\]
**Output:** 7

**Constraints:**

*   The number of nodes in the tree is in the range `[1, 104]`.
*   `-231 <= Node.val <= 231 - 1`
