# Check If a String Contains All Binary Codes of Size K

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Bit Manipulation</div>
<div style="color: #46c6c2">Rolling Hash</div>
<div style="color: #46c6c2">Hash Function</div>
</div>

---

Given a binary string `s` and an integer `k`, return `true` _if every binary code of length_ `k` _is a substring of_ `s`. Otherwise, return `false`.

**Example 1:**

**Input:** s = "00110110", k = 2
**Output:** true
**Explanation:** The binary codes of length 2 are "00", "01", "10" and "11". They can be all found as substrings at indices 0, 1, 3 and 2 respectively.

**Example 2:**

**Input:** s = "0110", k = 1
**Output:** true
**Explanation:** The binary codes of length 1 are "0" and "1", it is clear that both exist as a substring. 

**Example 3:**

**Input:** s = "0110", k = 2
**Output:** false
**Explanation:** The binary code "00" is of length 2 and does not exist in the array.

**Constraints:**

*   `1 <= s.length <= 5 * 105`
*   `s[i]` is either `'0'` or `'1'`.
*   `1 <= k <= 20`