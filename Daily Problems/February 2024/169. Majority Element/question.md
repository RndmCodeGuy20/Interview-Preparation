
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

# Majority Element

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Hash Table</div>
<div class="diff" style="color: #46c6c2">Divide and Conquer</div>
<div class="diff" style="color: #46c6c2">Sorting</div>
<div class="diff" style="color: #46c6c2">Counting</div>
</div>

---

Given an array `nums` of size `n`, return _the majority element_.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

**Example 1:**

**Input:** nums = \[3,2,3\]
**Output:** 3

**Example 2:**

**Input:** nums = \[2,2,1,1,1,2,2\]
**Output:** 2

**Constraints:**

*   `n == nums.length`
*   `1 <= n <= 5 * 104`
*   `-109 <= nums[i] <= 109`

**Follow-up:** Could you solve the problem in linear time and in `O(1)` space?
