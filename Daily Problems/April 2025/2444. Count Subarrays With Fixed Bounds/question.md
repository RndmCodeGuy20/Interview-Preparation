# Count Subarrays With Fixed Bounds

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Queue</div>
<div style="color: #46c6c2">Sliding Window</div>
<div style="color: #46c6c2">Monotonic Queue</div>
</div>

---

You are given an integer array `nums` and two integers `minK` and `maxK`.

A **fixed-bound subarray** of `nums` is a subarray that satisfies the following conditions:

*   The **minimum** value in the subarray is equal to `minK`.
*   The **maximum** value in the subarray is equal to `maxK`.

Return _the **number** of fixed-bound subarrays_.

A **subarray** is a **contiguous** part of an array.

**Example 1:**

**Input:** nums = \[1,3,5,2,7,5\], minK = 1, maxK = 5
**Output:** 2
**Explanation:** The fixed-bound subarrays are \[1,3,5\] and \[1,3,5,2\].

**Example 2:**

**Input:** nums = \[1,1,1,1\], minK = 1, maxK = 1
**Output:** 10
**Explanation:** Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.

**Constraints:**

*   `2 <= nums.length <= 105`
*   `1 <= nums[i], minK, maxK <= 106`