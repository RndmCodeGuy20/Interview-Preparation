# Balance a Binary Search Tree

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Divide and Conquer</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Tree</div>
<div style="color: #46c6c2">Depth-First Search</div>
<div style="color: #46c6c2">Binary Search Tree</div>
<div style="color: #46c6c2">Binary Tree</div>
</div>

---

Given the `root` of a binary search tree, return _a **balanced** binary search tree with the same node values_. If there is more than one answer, return **any of them**.

A binary search tree is **balanced** if the depth of the two subtrees of every node never differs by more than `1`.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/08/10/balance1-tree.jpg)

**Input:** root = \[1,null,2,null,3,null,4,null,null\]
**Output:** \[2,1,3,null,null,null,4\]
**Explanation:** This is not the only correct answer, \[3,1,4,null,2\] is also correct.

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/08/10/balanced2-tree.jpg)

**Input:** root = \[2,1,3\]
**Output:** \[2,1,3\]

**Constraints:**

*   The number of nodes in the tree is in the range `[1, 104]`.
*   `1 <= Node.val <= 105`