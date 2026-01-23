# Minimum Pair Removal to Sort Array II

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Linked List</div>
<div style="color: #46c6c2">Heap (Priority Queue)</div>
<div style="color: #46c6c2">Simulation</div>
<div style="color: #46c6c2">Doubly-Linked List</div>
<div style="color: #46c6c2">Ordered Set</div>
</div>

---

Given an array `nums`, you can perform the following operation any number of times:

*   Select the **adjacent** pair with the **minimum** sum in `nums`. If multiple such pairs exist, choose the leftmost one.
*   Replace the pair with their sum.

Return the **minimum number of operations** needed to make the array **non-decreasing**.

An array is said to be **non-decreasing** if each element is greater than or equal to its previous element (if it exists).

**Example 1:**

**Input:** nums = \[5,2,3,1\]

**Output:** 2

**Explanation:**

*   The pair `(3,1)` has the minimum sum of 4. After replacement, `nums = [5,2,4]`.
*   The pair `(2,4)` has the minimum sum of 6. After replacement, `nums = [5,6]`.

The array `nums` became non-decreasing in two operations.

**Example 2:**

**Input:** nums = \[1,2,2\]

**Output:** 0

**Explanation:**

The array `nums` is already sorted.

**Constraints:**

*   `1 <= nums.length <= 105`
*   `-109 <= nums[i] <= 109`