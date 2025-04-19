# Count the Number of Fair Pairs

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Two Pointers</div>
<div style="color: #46c6c2">Binary Search</div>
<div style="color: #46c6c2">Sorting</div>
</div>

---

Given a **0-indexed** integer array `nums` of size `n` and two integers `lower` and `upper`, return _the number of fair pairs_.

A pair `(i, j)` is **fair** if:

*   `0 <= i < j < n`, and
*   `lower <= nums[i] + nums[j] <= upper`

**Example 1:**

**Input:** nums = \[0,1,7,4,4,5\], lower = 3, upper = 6
**Output:** 6
**Explanation:** There are 6 fair pairs: (0,3), (0,4), (0,5), (1,3), (1,4), and (1,5).

**Example 2:**

**Input:** nums = \[1,7,9,2,5\], lower = 11, upper = 11
**Output:** 1
**Explanation:** There is a single fair pair: (2,3).

**Constraints:**

*   `1 <= nums.length <= 105`
*   `nums.length == n`
*   `-109 <= nums[i] <= 109`
*   `-109 <= lower <= upper <= 109`