
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

# Linked List Cycle

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Hash Table</div>
<div class="diff" style="color: #46c6c2">Linked List</div>
<div class="diff" style="color: #46c6c2">Two Pointers</div>
</div>

---

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. **Note that `pos` is not passed as a parameter**.

Return `true` _if there is a cycle in the linked list_. Otherwise, return `false`.

**Example 1:**

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

**Input:** head = \[3,2,0,-4\], pos = 1
**Output:** true
**Explanation:** There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

**Example 2:**

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png)

**Input:** head = \[1,2\], pos = 0
**Output:** true
**Explanation:** There is a cycle in the linked list, where the tail connects to the 0th node.

**Example 3:**

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png)

**Input:** head = \[1\], pos = -1
**Output:** false
**Explanation:** There is no cycle in the linked list.

**Constraints:**

*   The number of the nodes in the list is in the range `[0, 104]`.
*   `-105 <= Node.val <= 105`
*   `pos` is `-1` or a **valid index** in the linked-list.

**Follow up:** Can you solve it using `O(1)` (i.e. constant) memory?
