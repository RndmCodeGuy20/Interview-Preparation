# Greatest Sum Divisible by Three

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Sorting</div>
</div>

---

Given an integer array `nums`, return _the **maximum possible sum** of elements of the array such that it is divisible by three_.

**Example 1:**

**Input:** nums = \[3,6,5,1,8\]
**Output:** 18
**Explanation:** Pick numbers 3, 6, 1 and 8 their sum is 18 (maximum sum divisible by 3).

**Example 2:**

**Input:** nums = \[4\]
**Output:** 0
**Explanation:** Since 4 is not divisible by 3, do not pick any number.

**Example 3:**

**Input:** nums = \[1,2,3,4,4\]
**Output:** 12
**Explanation:** Pick numbers 1, 3, 4 and 4 their sum is 12 (maximum sum divisible by 3).

**Constraints:**

*   `1 <= nums.length <= 4 * 104`
*   `1 <= nums[i] <= 104`