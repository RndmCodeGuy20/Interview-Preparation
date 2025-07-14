# Convert Binary Number in a Linked List to Integer

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Linked List</div>
<div style="color: #46c6c2">Math</div>
</div>

---

Given `head` which is a reference node to a singly-linked list. The value of each node in the linked list is either `0` or `1`. The linked list holds the binary representation of a number.

Return the _decimal value_ of the number in the linked list.

The **most significant bit** is at the head of the linked list.

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/12/05/graph-1.png)

**Input:** head = \[1,0,1\]
**Output:** 5
**Explanation:** (101) in base 2 = (5) in base 10

**Example 2:**

**Input:** head = \[0\]
**Output:** 0

**Constraints:**

*   The Linked List is not empty.
*   Number of nodes will not exceed `30`.
*   Each node's value is either `0` or `1`.