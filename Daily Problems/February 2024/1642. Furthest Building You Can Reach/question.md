
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

# Furthest Building You Can Reach

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Greedy</div>
<div class="diff" style="color: #46c6c2">Heap (Priority Queue)</div>
</div>

---

You are given an integer array `heights` representing the heights of buildings, some `bricks`, and some `ladders`.

You start your journey from building `0` and move to the next building by possibly using bricks or ladders.

While moving from building `i` to building `i+1` (**0-indexed**),

*   If the current building's height is **greater than or equal** to the next building's height, you do **not** need a ladder or bricks.
*   If the current building's height is **less than** the next building's height, you can either use **one ladder** or `(h[i+1] - h[i])` **bricks**.

_Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally._

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/10/27/q4.gif)

**Input:** heights = \[4,2,7,6,9,14,12\], bricks = 5, ladders = 1
**Output:** 4
**Explanation:** Starting at building 0, you can follow these steps:
- Go to building 1 without using ladders nor bricks since 4 >= 2.
- Go to building 2 using 5 bricks. You must use either bricks or ladders because 2 < 7.
- Go to building 3 without using ladders nor bricks since 7 >= 6.
- Go to building 4 using your only ladder. You must use either bricks or ladders because 6 < 9.
It is impossible to go beyond building 4 because you do not have any more bricks or ladders.

**Example 2:**

**Input:** heights = \[4,12,2,7,3,18,20,3,19\], bricks = 10, ladders = 2
**Output:** 7

**Example 3:**

**Input:** heights = \[14,3,19,3\], bricks = 17, ladders = 0
**Output:** 3

**Constraints:**

*   `1 <= heights.length <= 105`
*   `1 <= heights[i] <= 106`
*   `0 <= bricks <= 109`
*   `0 <= ladders <= heights.length`
