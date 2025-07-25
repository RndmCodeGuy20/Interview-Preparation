# Maximum Number of Events That Can Be Attended

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Sorting</div>
<div style="color: #46c6c2">Heap (Priority Queue)</div>
</div>

---

You are given an array of `events` where `events[i] = [startDayi, endDayi]`. Every event `i` starts at `startDayi` and ends at `endDayi`.

You can attend an event `i` at any day `d` where `startTimei <= d <= endTimei`. You can only attend one event at any time `d`.

Return _the maximum number of events you can attend_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/02/05/e1.png)

**Input:** events = \[\[1,2\],\[2,3\],\[3,4\]\]
**Output:** 3
**Explanation:** You can attend all the three events.
One way to attend them all is as shown.
Attend the first event on day 1.
Attend the second event on day 2.
Attend the third event on day 3.

**Example 2:**

**Input:** events= \[\[1,2\],\[2,3\],\[3,4\],\[1,2\]\]
**Output:** 4

**Constraints:**

*   `1 <= events.length <= 105`
*   `events[i].length == 2`
*   `1 <= startDayi <= endDayi <= 105`