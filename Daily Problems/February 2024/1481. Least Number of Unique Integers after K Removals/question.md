
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

# Least Number of Unique Integers after K Removals

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Hash Table</div>
<div class="diff" style="color: #46c6c2">Greedy</div>
<div class="diff" style="color: #46c6c2">Sorting</div>
<div class="diff" style="color: #46c6c2">Counting</div>
</div>

---

Given an array of integers `arr` and an integer `k`. Find the _least number of unique integers_ after removing **exactly** `k` elements**.**

**Example 1:**

**Input:** arr = \[5,5,4\], k = 1
**Output:** 1
**Explanation**: Remove the single 4, only 5 is left.

**Example 2:**

**Input:** arr = \[4,3,1,1,3,3,2\], k = 3
**Output:** 2
**Explanation**: Remove 4, 2 and either one of the two 1s or three 3s. 1 and 3 will be left.

**Constraints:**

*   `1 <= arr.length <= 10^5`
*   `1 <= arr[i] <= 10^9`
*   `0 <= k <= arr.length`
