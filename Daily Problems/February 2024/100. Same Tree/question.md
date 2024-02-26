
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

# Same Tree

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Tree</div>
<div class="diff" style="color: #46c6c2">Depth-First Search</div>
<div class="diff" style="color: #46c6c2">Breadth-First Search</div>
<div class="diff" style="color: #46c6c2">Binary Tree</div>
</div>

---

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/12/20/ex1.jpg)

**Input:** p = \[1,2,3\], q = \[1,2,3\]
**Output:** true

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/12/20/ex2.jpg)

**Input:** p = \[1,2\], q = \[1,null,2\]
**Output:** false

**Example 3:**

![](https://assets.leetcode.com/uploads/2020/12/20/ex3.jpg)

**Input:** p = \[1,2,1\], q = \[1,1,2\]
**Output:** false

**Constraints:**

*   The number of nodes in both trees is in the range `[0, 100]`.
*   `-104 <= Node.val <= 104`
