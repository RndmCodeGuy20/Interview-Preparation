# Delete Nodes From Linked List Present in Array

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Linked List</div>
</div>

---

You are given an array of integers `nums` and the `head` of a linked list. Return the `head` of the modified linked list after **removing** all nodes from the linked list that have a value that exists in `nums`.

**Example 1:**

**Input:** nums = \[1,2,3\], head = \[1,2,3,4,5\]

**Output:** \[4,5\]

**Explanation:**

**![](https://assets.leetcode.com/uploads/2024/06/11/linkedlistexample0.png)**

Remove the nodes with values 1, 2, and 3.

**Example 2:**

**Input:** nums = \[1\], head = \[1,2,1,2,1,2\]

**Output:** \[2,2,2\]

**Explanation:**

![](https://assets.leetcode.com/uploads/2024/06/11/linkedlistexample1.png)

Remove the nodes with value 1.

**Example 3:**

**Input:** nums = \[5\], head = \[1,2,3,4\]

**Output:** \[1,2,3,4\]

**Explanation:**

**![](https://assets.leetcode.com/uploads/2024/06/11/linkedlistexample2.png)**

No node has value 5.

**Constraints:**

*   `1 <= nums.length <= 105`
*   `1 <= nums[i] <= 105`
*   All elements in `nums` are unique.
*   The number of nodes in the given list is in the range `[1, 105]`.
*   `1 <= Node.val <= 105`
*   The input is generated such that there is at least one node in the linked list that has a value not present in `nums`.