# Longest Subarray of 1's After Deleting One Element

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Sliding Window</div>
</div>

---

Given a binary array `nums`, you should delete one element from it.

Return _the size of the longest non-empty subarray containing only_ `1`_'s in the resulting array_. Return `0` if there is no such subarray.

**Example 1:**

**Input:** nums = \[1,1,0,1\]
**Output:** 3
**Explanation:** After deleting the number in position 2, \[1,1,1\] contains 3 numbers with value of 1's.

**Example 2:**

**Input:** nums = \[0,1,1,1,0,1,1,0,1\]
**Output:** 5
**Explanation:** After deleting the number in position 4, \[0,1,1,1,1,1,0,1\] longest subarray with value of 1's is \[1,1,1,1,1\].

**Example 3:**

**Input:** nums = \[1,1,1\]
**Output:** 2
**Explanation:** You must delete one element.

**Constraints:**

*   `1 <= nums.length <= 105`
*   `nums[i]` is either `0` or `1`.