
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

# Missing Number

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #46c6c2;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Easy</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Hash Table</div>
<div class="diff" style="color: #46c6c2">Math</div>
<div class="diff" style="color: #46c6c2">Binary Search</div>
<div class="diff" style="color: #46c6c2">Bit Manipulation</div>
<div class="diff" style="color: #46c6c2">Sorting</div>
</div>

---

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return _the only number in the range that is missing from the array._

**Example 1:**

**Input:** nums = \[3,0,1\]
**Output:** 2
**Explanation:** n = 3 since there are 3 numbers, so all numbers are in the range \[0,3\]. 2 is the missing number in the range since it does not appear in nums.

**Example 2:**

**Input:** nums = \[0,1\]
**Output:** 2
**Explanation:** n = 2 since there are 2 numbers, so all numbers are in the range \[0,2\]. 2 is the missing number in the range since it does not appear in nums.

**Example 3:**

**Input:** nums = \[9,6,4,2,3,5,7,0,1\]
**Output:** 8
**Explanation:** n = 9 since there are 9 numbers, so all numbers are in the range \[0,9\]. 8 is the missing number in the range since it does not appear in nums.

**Constraints:**

*   `n == nums.length`
*   `1 <= n <= 104`
*   `0 <= nums[i] <= n`
*   All the numbers of `nums` are **unique**.

**Follow up:** Could you implement a solution using only `O(1)` extra space complexity and `O(n)` runtime complexity?
