# Valid Triangle Number

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Two Pointers</div>
<div style="color: #46c6c2">Binary Search</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Sorting</div>
</div>

---

Given an integer array `nums`, return _the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle_.

**Example 1:**

**Input:** nums = \[2,2,3,4\]
**Output:** 3
**Explanation:** Valid combinations are: 
2,3,4 (using the first 2)
2,3,4 (using the second 2)
2,2,3

**Example 2:**

**Input:** nums = \[4,2,3,4\]
**Output:** 4

**Constraints:**

*   `1 <= nums.length <= 1000`
*   `0 <= nums[i] <= 1000`