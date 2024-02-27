
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

# Diameter of Binary Tree

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Tree</div>
<div class="diff" style="color: #46c6c2">Depth-First Search</div>
<div class="diff" style="color: #46c6c2">Binary Tree</div>
</div>

---

Given the `root` of a binary tree, return _the length of the **diameter** of the tree_.

The **diameter** of a binary tree is the **length** of the longest path between any two nodes in a tree. This path may or may not pass through the `root`.

The **length** of a path between two nodes is represented by the number of edges between them.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/03/06/diamtree.jpg)

**Input:** root = \[1,2,3,4,5\]
**Output:** 3
**Explanation:** 3 is the length of the path \[4,2,1,3\] or \[5,2,1,3\].

**Example 2:**

**Input:** root = \[1,2\]
**Output:** 1

**Constraints:**

*   The number of nodes in the tree is in the range `[1, 104]`.
*   `-100 <= Node.val <= 100`
