# Lexicographically Minimum String After Removing Stars

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Stack</div>
<div style="color: #46c6c2">Greedy</div>
<div style="color: #46c6c2">Heap (Priority Queue)</div>
</div>

---

You are given a string `s`. It may contain any number of `'*'` characters. Your task is to remove all `'*'` characters.

While there is a `'*'`, do the following operation:

*   Delete the leftmost `'*'` and the **smallest** non-`'*'` character to its _left_. If there are several smallest characters, you can delete any of them.

Return the lexicographically smallest resulting string after removing all `'*'` characters.

**Example 1:**

**Input:** s = "aaba\*"

**Output:** "aab"

**Explanation:**

We should delete one of the `'a'` characters with `'*'`. If we choose `s[3]`, `s` becomes the lexicographically smallest.

**Example 2:**

**Input:** s = "abc"

**Output:** "abc"

**Explanation:**

There is no `'*'` in the string.

**Constraints:**

*   `1 <= s.length <= 105`
*   `s` consists only of lowercase English letters and `'*'`.
*   The input is generated such that it is possible to delete all `'*'` characters.