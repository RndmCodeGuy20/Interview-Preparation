# K-th Smallest in Lexicographical Order

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">Trie</div>
</div>

---

Given two integers `n` and `k`, return _the_ `kth` _lexicographically smallest integer in the range_ `[1, n]`.

**Example 1:**

**Input:** n = 13, k = 2
**Output:** 10
**Explanation:** The lexicographical order is \[1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9\], so the second smallest number is 10.

**Example 2:**

**Input:** n = 1, k = 1
**Output:** 1

**Constraints:**

*   `1 <= k <= n <= 109`