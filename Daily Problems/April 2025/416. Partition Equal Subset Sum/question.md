# Partition Equal Subset Sum

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Dynamic Programming</div>
</div>

---

Given an integer array `nums`, return `true` _if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or_ `false` _otherwise_.

**Example 1:**

**Input:** nums = \[1,5,11,5\]
**Output:** true
**Explanation:** The array can be partitioned as \[1, 5, 5\] and \[11\].

**Example 2:**

**Input:** nums = \[1,2,3,5\]
**Output:** false
**Explanation:** The array cannot be partitioned into equal sum subsets.

**Constraints:**

*   `1 <= nums.length <= 200`
*   `1 <= nums[i] <= 100`